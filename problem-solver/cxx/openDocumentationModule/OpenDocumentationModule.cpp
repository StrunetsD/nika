#include "OpenDocumentationModule.hpp"

namespace openDocumentationModule
{
// Регистрация модуля
SC_IMPLEMENT_MODULE(OpenDocumentationModule)

sc_result OpenDocumentationModule::InitializeImpl()
{
  if (!OpenDocumentationKeynodes::InitGlobal())
    return SC_RESULT_ERROR;

  // Регистрация агентов модуля
  ScMemoryContext ctx(sc_access_lvl_make_min, "OpenDocumentationModule");
  if (ActionUtils::isActionDeactivated(&ctx, OpenDocumentationKeynodes::action_open_documentation))
  {
    SC_LOG_ERROR("action_open_documentation is deactivated");
  }
  else
  {
    SC_AGENT_REGISTER(OpenDocumentationAgent);
  }

  return SC_RESULT_OK;
}

sc_result OpenDocumentationModule::ShutdownImpl()
{
  // Дерегистрация агентов модуля
  SC_AGENT_UNREGISTER(OpenDocumentationAgent);

  return SC_RESULT_OK;
}

}  // namespace openDocumentationModule
