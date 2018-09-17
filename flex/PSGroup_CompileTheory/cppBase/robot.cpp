#include <string>
#include <map>
#include <memory>
#include <iostream>

namespace
{
    struct Interpreter
    {
        std::map<std::string, std::function<void()>> commands;
        bool willExit = false;
    };

    decltype(auto) MakeRobotInterpreter() {
        auto interpreter = std::make_shared<Interpreter>();
        interpreter->commands["up"] = [] {
            std::cout << "Walking up ..." << std::endl;
        };

        interpreter->commands["down"] = [] {
            std::cout << "Walking down ..." << std::endl;
        };

        interpreter->commands["left"] = [] {
            std::cout << "Walking left ..." << std::endl;
        };

        interpreter->commands["right"] = [] {
            std::cout << "Walking right ..." << std::endl;
        };

        interpreter->commands["help"] = [interpreter] {
            std::cout << "Available commands:" << std::endl;
            for(const auto &pair: interpreter->commands) {
                std::cout << pair.first << std::endl;
            }
        };

        interpreter->commands["exit"] = [interpreter] {
            interpreter->willExit = true;
            std::cout << "Bye bye!" << std::endl;
        };

        return interpreter;
    }

    void ExecuteCommand(Interpreter &interpreter, const std::string &word) {
        auto foundIt = interpreter.commands.find(word);
        if(foundIt != interpreter.commands.end()) {
            foundIt->second();
        }
        else {
            std::cerr << "unknown command " << word << std::endl;
        }
    }

    void ReadInputInLoop(Interpreter &interpreter) {
        std::string word;
        while(!interpreter.willExit && (std::cin >> word)) {
            ExecuteCommand(interpreter, word);
        }
    }
}

int main() {
    auto interpreter = MakeRobotInterpreter();
    ExecuteCommand(*interpreter, "help");
    ReadInputInLoop(*interpreter);
    std::cout << std::endl << "Finish program!" << std::endl;
}
