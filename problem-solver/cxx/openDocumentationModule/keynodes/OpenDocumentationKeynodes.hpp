#pragma once

#include "sc-memory/sc_addr.hpp"
#include "sc-memory/sc_object.hpp"
#include "OpenDocumentationKeynodes.generated.hpp"

namespace openDocumentationModule
{
class OpenDocumentationKeynodes: public ScObject
{
    SC_CLASS()
    SC_GENERATED_BODY()

public:
  SC_PROPERTY(Keynode("action_open_documentation"), ForceCreate)
  static ScAddr action_open_documentation;
};

} // namespace openDocumentationModule