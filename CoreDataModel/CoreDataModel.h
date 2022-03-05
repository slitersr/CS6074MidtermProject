#pragma once

#include <string>

#ifdef CORE_DATA_MODEL_LIBRARY_EXPORT
#define CORE_DATA_MODEL_LIBRARY_API __declspec(dllexport)
#else
#define CORE_DATA_MODEL_LIBRARY_API __declspec(dllimport)
#endif

class Message {
private:
	std::string recipient;
	std::string content;

public:
	CORE_DATA_MODEL_LIBRARY_API std::string getContent() {
		return content;
	}

	CORE_DATA_MODEL_LIBRARY_API void setContent(std::string content) {
		this->content = content;
	}

	CORE_DATA_MODEL_LIBRARY_API std::string getRecipient() {
		return recipient;
	}

	CORE_DATA_MODEL_LIBRARY_API void setRecipient(std::string recipient) {
		this->recipient = recipient;
	}
};