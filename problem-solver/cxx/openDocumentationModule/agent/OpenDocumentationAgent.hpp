#pragma once

#include <memory>
#include <string>

#include "sc-memory/kpm/sc_agent.hpp"
#include "sc-agents-common/keynodes/coreKeynodes.hpp"

#include "searcher/MessageSearcher.hpp"

#include "OpenDocumentationAgent.generated.hpp"

namespace openDocumentationModule
{

class OpenDocumentationAgent : public ScAgent
{
  SC_CLASS(Agent, Event(scAgentsCommon::CoreKeynodes::question_initiated, ScEvent::Type::AddOutputEdge))
  SC_GENERATED_BODY()

private:
  bool checkActionClass(ScAddr const & actionAddr);
  std::string getMessageText(ScAddr const & messageAddr);

  std::unique_ptr<dialogControlModule::MessageSearcher> messageSearcher;
};

}  // namespace openDocumentationModule
