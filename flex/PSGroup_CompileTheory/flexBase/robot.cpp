#include <string>
#include <map>
#include <memory>
#include <iostream>
#include <functional>
#include "RobotTokens.h"

extern "C" {
int ScanToken();
}

    struct Command {
        std::string info;
        std::function<void()> action;
    };

    struct Interpreter {
        std::map<Token, Command> commands;
        bool willExit = false;
    };

    decltype(auto) MakeRobotInterpreter() {
        auto interpreter = std::make_shared<Interpreter>();
        interpreter->commands[TOKEN_UP] = {
            "up - moves robot up",
            [] {
                std::cout << "Walking up ..." << std::endl;
            }
        };
        interpreter->commands[TOKEN_DOWN] = {
            "down - moves robot down",
            [] {
                std::cout << "Walking down ..." << std::endl;
            }
        };
        interpreter->commands[TOKEN_RIGHT] = {
            "right - moves robot right",
            [] {
                std::cout << "Walking right ..." << std::endl;
            }
        };
        interpreter->commands[TOKEN_LEFT] = {
            "left - moves robot left",
            [] {
                std::cout << "Walking left ..." << std::endl;
            }
        };
        interpreter->commands[TOKEN_HELP] = {
            "help - outputs this help",
            [interpreter] {
                std::cout << "Available commands: " << std::endl;
                for(const auto &pair: interpreter->commands) {
                    std::cout << pair.second.info << std::endl;
                }
            }
        };
        interpreter->commands[TOKEN_EXIT] = {
            "exit - exits program",
            [interpreter] {
                interpreter->willExit = true;
                std::cout << "Bye, bye!" << std::endl;
            }
        }
        return interpreter;
    }
    void ExecuteCommand(Interpreter &interpreter, Token tokenId) {
        auto foundIt = interpreter.commands.find(tokenId);
        if(foundIt != interpreter.commands.end()) {
            foundIt->second.action();
        }
        else {
            std::cerr << "unknown command, type 'help' to see available commands" << std::endl;
        }
    }
    void ReadInputInLoop(Interpreter &interpreter) {
        while(!interpreter.willExit) {
            int tokenId = ScanToken();
            if(tokenId == 0) {
                return;
            }
            ExecuteCommand(interpreter, static_cast<Token>(tokenId));
        }
    }

int main() {
    auto interpreter = MakeRobotInterpreter();
    ExecuteCommand(*interpreter, TOKEN_HELP);
    ReadInputInLoop(*interpreter);
}
