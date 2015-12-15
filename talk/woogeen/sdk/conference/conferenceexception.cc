/*
 * Intel License
 */

#include "talk/woogeen/sdk/include/cpp/woogeen/conferenceexception.h"

namespace woogeen {

ConferenceException::ConferenceException() : ConferenceException(kUnkown) {}

ConferenceException::ConferenceException(enum Type type)
    : ConferenceException(type, "Unkown P2P exception.") {}

ConferenceException::ConferenceException(enum Type type,
                                         const std::string& message)
    : Exception(message), type_(type) {}
}
