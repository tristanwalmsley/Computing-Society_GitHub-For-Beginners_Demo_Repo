// ============================================================================
//  COMPUTING SOCIETY - GITHUB FOR BEGINNERS (practice repo)
// ============================================================================
//
//  WHAT THIS APP DOES
//  ------------------
//  It's a tiny "Society Board" program. When you run it (Ctrl+F5) it prints a
//  welcome banner, a tagline, and a list of society members.
// 
//  That's it! The code is NOT the point. This repo exists so you can practise
//  using Git & GitHub: making changes, committing, pushing, branching,
//  opening pull requests, and fixing merge conflicts.
//
//  You don't need to understand C++ to do any of these tasks. You're only
//  ever adding, changing or deleting a line of text.
//
//  IMPORTANT: THIS IS YOUR OWN COPY
//  --------------------------------
//  In Task 1 you'll make your own copy of this repo on YOUR GitHub account.
//  Everything you do after that only affects your copy. You can't break the
//  original, so experiment freely!
//
//  HOW TO DO THE TASKS
//  -------------------
//  Use whichever you prefer (both do exactly the same thing underneath):
//    [GH Desktop]  GitHub Desktop
//    [VS]          Visual Studio's built-in Git tools (Git menu, and the
//                  "Git Changes" window: View > Git Changes)
//  Menu names can differ slightly between versions. If you get stuck, ask!
//
//  Want to learn the Git commands behind all this? See
//  BONUS_git_commands.txt (it's in this same project folder).
//
// ----------------------------------------------------------------------------
//  YOUR TASKS (do them in order)
// ----------------------------------------------------------------------------
//
//  TASK 1 - MAKE YOUR OWN COPY, THEN CLONE IT
//    a) On the practice repo's GitHub page, click the green "Use this
//       template" button > "Create a new repository". Pick yourself as the
//       owner, give it a name (e.g. my-practice-repo), and click create.
//       You now have your own repo on your own GitHub account!
//    b) Clone = download a copy of YOUR repo (with its history) to your PC:
//         [GH Desktop]  File > Clone repository > GitHub.com tab > pick it
//         [VS]          Git > Clone Repository > paste YOUR repo's link
//    c) Open DummyRepo.sln and press Ctrl+F5 to see what the program prints.
//
//  TASK 2 - MAKE A BRANCH
//    A branch is your own safe copy to try changes without touching "main".
//    [GH Desktop]  Click "Current Branch" at the top > New Branch
//    [VS]          Git > New Branch...
//    Name it add-<yourname> (e.g. add-sam). Do the next tasks on this branch.
//
//  TASK 3 - ADD A LINE, THEN COMMIT
//    Open members.cpp and add your name where it says to, then SAVE the file.
//    Now look at the changes Git has noticed:
//    [GH Desktop]  "Changes" tab: green = added, red = removed
//    [VS]          "Git Changes" window
//    A commit is a saved snapshot with a message. Write a short summary like
//    "Add Sam to members" and commit:
//    [GH Desktop]  Type summary > "Commit to add-<yourname>"
//    [VS]          Type message > "Commit All"
//
//  TASK 4 - EDIT A LINE
//    Find the line marked "TASK 4" below and change the tagline text.
//    Save, check the changes (red/green), and make a NEW commit for it
//    (e.g. "Change tagline"). Small commits with clear messages = good habit.
//
//  TASK 5 - REMOVE A LINE
//    Find the line marked "TASK 5" below and delete the whole line.
//    Save, check the changes (it'll show up red), and commit it
//    (e.g. "Remove temporary line").
//
//  TASK 6 - ADD YOUR OWN LINE
//    Find the spot marked "TASK 6" below. Copy the line above it and change
//    the text to your favourite programming language. Save and commit.
//
//  TASK 7 - LOOK AT YOUR HISTORY
//    You should now have 4 commits. See them all:
//    [GH Desktop]  "History" tab (click a commit to see exactly what changed)
//    [VS]          Git > View Branch History
//
//  TASK 8 - PUSH & OPEN A PULL REQUEST
//    Push = upload your commits to your GitHub repo.
//    [GH Desktop]  "Publish branch" button (top)
//    [VS]          "Push" / "Publish Branch" in the Git Changes window
//    Now go to YOUR repo on github.com. You'll see a banner to "Compare & pull
//    request" (GitHub Desktop's "Create Pull Request" button also gets you
//    there). A pull request (PR) proposes merging your branch into main.
//    Check it says "base: main" in YOUR repo, write a short description, and
//    open it. Look at the "Files changed" tab (green/red lines, like before).
//    Finally click "Merge pull request" > "Confirm merge" to merge it.
//    (Optional: add a friend as a collaborator under Settings >
//    Collaborators, and review each other's PRs.)
//
//  TASK 9 - SYNC YOUR PC (SWITCH TO MAIN & PULL)
//    The merge happened on GitHub, so your PC doesn't have it yet.
//    1. Switch back to the main branch
//         [GH Desktop]  Current Branch > main
//         [VS]          Git > Manage Branches > double-click main
//    2. Pull = download the latest changes from GitHub
//         [GH Desktop]  "Fetch origin", then "Pull origin"
//         [VS]          "Pull" in the Git Changes window
//    Check that your name now appears in members.cpp on main!
//
//  TASK 10 - CAUSE (AND FIX) A MERGE CONFLICT
//    A conflict happens when two branches change the same line differently
//    and Git can't decide which one to keep. You'll make one on purpose:
//      1. From main, make a branch called conflict-a. Change the tagline
//         (TASK 4 line) to say something. Commit.
//      2. Switch back to main. Make ANOTHER branch called conflict-b.
//         Change the SAME tagline line to say something different. Commit.
//      3. Switch to main and merge conflict-a into it (this works fine):
//           [GH Desktop]  Current Branch > "Choose a branch to merge into
//                         main" > conflict-a
//           [VS]          Git > Merge... > conflict-a
//      4. Now, still on main, merge conflict-b into it. CONFLICT!
//      5. Fix it: open the file. Git has marked both versions with
//         <<<<<<<  =======  >>>>>>>  Keep the one you want (or combine
//         them), delete the marker lines, save, then commit the merge.
//         [GH Desktop]  Click "Open in Visual Studio" on the conflict screen
//         [VS]          Use the Merge Editor that opens
//    Then push main to GitHub.
//
//  TASK 11 - UNDO SOMETHING
//    Throw away changes you haven't committed yet:
//    [GH Desktop]  Changes tab > right-click the file > Discard Changes
//    [VS]          Git Changes window > right-click the file > Undo Changes
//    Undo a commit you already made (safely, history is kept):
//    [GH Desktop]  History tab > right-click the commit > Revert Changes
//    [VS]          Git > View Branch History > right-click commit > Revert
//
//  BONUS - Switch between branches and watch the files change on your screen
//          as you go. That's the magic of Git!
//
// ============================================================================

#include <iostream>
#include "members.h"

int main()
{
    std::cout << "==============================" << std::endl;
    std::cout << "   COMPUTING SOCIETY BOARD" << std::endl;
    std::cout << "==============================" << std::endl;

    // TASK 4: EDIT THIS LINE (change the tagline text between the quotes)
    std::cout << "Tagline: Learning Git, one commit at a time" << std::endl;

    // TASK 5: DELETE THIS WHOLE LINE
    std::cout << "This line is temporary, please delete me!" << std::endl;

    std::cout << std::endl;
    printMembers();
    std::cout << std::endl;

    // TASK 6: ADD YOUR OWN LINE BELOW THIS ONE (copy it, change the text)
    std::cout << "Favourite language: C++" << std::endl;

    return 0;
}
