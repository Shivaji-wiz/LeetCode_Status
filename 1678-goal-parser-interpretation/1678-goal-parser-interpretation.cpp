class Solution {
public:
    string interpret(string command) {
        command = regex_replace(command, regex("\\(al\\)"), "al");
        command = regex_replace(command, regex("\\(\\)"), "o");
        return command;
        
    }
};