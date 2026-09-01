#pragma once

#include "sc-memory/sc_memory.hpp"
#include "sc-memory/sc_module.hpp"

#include "keynodes/OpenDocumentationKeynodes.hpp"
#include "agent/OpenDocumentationAgent.hpp"
#include "utils/ActionUtils.hpp"

#include "OpenDocumentationModule.generated.hpp"


namespace openDocumentationModule
{
class OpenDocumentationModule : public ScModule
{
  SC_CLASS(LoadOrder(100))
  SC_GENERATED_BODY()

  // Метод инициализации модуля и его агентов
  virtual sc_result InitializeImpl() override;

  // Метод деинициализации модуля и его агентов
  virtual sc_result ShutdownImpl() override;
};

} // namespace openDocumentationModule
