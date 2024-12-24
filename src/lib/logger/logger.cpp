//
// Created by mist on 12/25/24.
//

#include "logger.h"
#include <spdlog/spdlog.h>

namespace emulatorSignal
{
    Logger::Logger() = default;

    void Logger::info(const std::string &message)
    {
        spdlog::info(message);
    }

    void Logger::debug(const std::string &message)
    {
        spdlog::debug(message);
    }

    void Logger::warning(const std::string &message)
    {
        spdlog::warn(message);
    }

    void Logger::error(const std::string &message)
    {
        spdlog::error(message);
    }
}
