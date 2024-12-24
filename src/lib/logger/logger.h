#pragma once
#include <format>

namespace emulatorSignal
{
    class Logger {
    public:
        Logger();
        ~Logger() = default;

        static void info(const std::string &message);

        static void debug(const std::string &message);

        static void warning(const std::string &message);

        static void error(const std::string &message);
    };
}
