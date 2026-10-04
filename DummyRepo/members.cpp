// ============================================================================
//  members.cpp - the list of society members
// ============================================================================
//
//  TASK 3: ADD YOUR NAME
//    Add a new line with your name inside quotes, followed by a comma,
//    just ABOVE the line that says "ADD NEW NAMES ABOVE THIS LINE".
//
//    Example:   "Sam",
//
//    Careful: every name needs its own line, quotes, AND a comma at the end!
//
//  TASK 9 NOTE:
//    Because everyone adds their name at the same spot, two people's branches
//    will touch the same place in this file. That's a perfect, realistic way
//    to get a merge conflict. When it happens, keep BOTH names and delete the
//    <<<<<<< ======= >>>>>>> marker lines.
// ============================================================================

#include <iostream>
#include <string>
#include <vector>
#include "members.h"

void printMembers()
{
    std::vector<std::string> members = {
        "Tristan",
        "Iain",
        "Tabitha",
		"Sean",
        // ADD NEW NAMES ABOVE THIS LINE
    };

    std::cout << "Society members:" << std::endl;
    for (const std::string& name : members)
    {
        std::cout << "  - " << name << std::endl;
    }
}
