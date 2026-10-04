# GitHub for Beginners: Practice Tasks

**Computing Society workshop**

## What is this?

The practice repo contains a tiny C++ program called the **Society Board**. When you run it (`Ctrl+F5`), it prints a welcome banner, a tagline, and a list of society members.

The code is **not the point**. The repo exists so you can practise Git and GitHub: making changes, committing, pushing, branching, opening pull requests and fixing merge conflicts. You don't need to know C++. You're only ever adding, changing or deleting a line of text.

> **This is your own copy.** In Task 1 you'll create your own copy of the repo on *your* GitHub account. Everything you do afterwards only affects your copy, so you can't break the original. Experiment freely!

## How to do the tasks

Use whichever tool you prefer. Both do exactly the same thing underneath.

- **GitHub Desktop**
- **Visual Studio** built-in Git tools (the **Git** menu, and the **Git Changes** window via *View > Git Changes*)

Menu names can differ slightly between versions. If you get stuck, ask!

The *Command line* lines are optional bonuses for anyone who wants to learn the Git commands behind the buttons. You can run them in a terminal opened inside your repo folder (in Visual Studio: *View > Terminal*).

---

## Task 1: Make your own copy, then clone it

1. On the practice repo's GitHub page, click the green **Use this template** button, then **Create a new repository**.
2. Pick yourself as the owner, give it a name (e.g. `my-practice-repo`), and create it. You now have your own repo on your own GitHub account.
3. **Clone** it: download a copy of *your* repo (with its history) to your PC.
   - **GitHub Desktop:** *File > Clone repository > GitHub.com tab* and pick it
   - **Visual Studio:** *Git > Clone Repository* and paste **your** repo's link
4. Open `DummyRepo.sln` and press `Ctrl+F5` to see what the program prints.

*Command line:* `git clone <your-repo-url>`, then `git status` and `git remote -v`

---

## Task 2: Make a branch

A **branch** is your own safe copy to try changes without touching `main`.

- **GitHub Desktop:** click **Current Branch** at the top, then **New Branch**
- **Visual Studio:** *Git > New Branch...*

Name it `add-<yourname>` (e.g. `add-sam`). Do the next tasks on this branch.

*Command line:* `git checkout -b add-<yourname>`

---

## Task 3: Add a line, then commit

1. Open `members.cpp`, add your name where it says to, and **save** the file.
   - Every name needs its own line, quotes, **and a comma** at the end.
2. Look at the changes Git has noticed.
   - **GitHub Desktop:** the **Changes** tab (green = added, red = removed)
   - **Visual Studio:** the **Git Changes** window
3. A **commit** is a saved snapshot with a message. Write a short summary like `Add Sam to members` and commit.
   - **GitHub Desktop:** type a summary, then **Commit to add-<yourname>**
   - **Visual Studio:** type a message, then **Commit All**

*Command line:* `git status`, `git diff`, `git add DummyRepo/members.cpp`, `git commit -m "Add <yourname> to members"`

---

## Task 4: Edit a line

1. In `main.cpp`, find the line marked `TASK 4` and change the tagline text between the quotes.
2. Save, check the changes (red and green), and make a **new** commit (e.g. `Change tagline`).

Small commits with clear messages are a good habit.

*Command line:* `git add DummyRepo/main.cpp`, `git commit -m "Change tagline"`

---

## Task 5: Remove a line

1. In `main.cpp`, find the line marked `TASK 5` and delete the whole line.
2. Save, check the changes (it will show up red), and commit it (e.g. `Remove temporary line`).

---

## Task 6: Add your own line

1. In `main.cpp`, find the spot marked `TASK 6`.
2. Copy the line above it and change the text to your favourite programming language.
3. Save and commit.

---

## Task 7: Look at your history

You should now have 4 commits. See them all:

- **GitHub Desktop:** the **History** tab (click a commit to see exactly what changed)
- **Visual Studio:** *Git > View Branch History*

*Command line:* `git log --oneline`, `git show <commit-id>`

---

## Task 8: Push and open a pull request

**Push** means uploading your commits to your GitHub repo.

- **GitHub Desktop:** the **Publish branch** button at the top
- **Visual Studio:** **Push** / **Publish Branch** in the Git Changes window

Then go to **your** repo on github.com:

1. Click the **Compare & pull request** banner (GitHub Desktop's **Create Pull Request** button also takes you there). A **pull request (PR)** proposes merging your branch into `main`.
2. Check it says `base: main` in **your** repo.
3. Write a short description and open the PR.
4. Look at the **Files changed** tab (green and red lines, like before).
5. Click **Merge pull request**, then **Confirm merge**.

*Optional:* add a friend as a collaborator under *Settings > Collaborators* and review each other's PRs.

*Command line:* `git push -u origin add-<yourname>`

---

## Task 9: Sync your PC (switch to main and pull)

The merge happened on GitHub, so your PC doesn't have it yet.

1. **Switch back to `main`.**
   - **GitHub Desktop:** *Current Branch > main*
   - **Visual Studio:** *Git > Manage Branches*, then double-click `main`
2. **Pull** to download the latest changes from GitHub.
   - **GitHub Desktop:** **Fetch origin**, then **Pull origin**
   - **Visual Studio:** **Pull** in the Git Changes window

Check that your name now appears in `members.cpp` on `main`.

*Command line:* `git checkout main`, `git pull`

---

## Task 10: Cause (and fix) a merge conflict

A **merge conflict** happens when two branches change the same line differently and Git can't decide which one to keep. You'll make one on purpose.

1. From `main`, make a branch called `conflict-a`. Change the tagline (the `TASK 4` line) to say something. Commit.
2. Switch back to `main`. Make **another** branch called `conflict-b`. Change the **same** tagline line to say something different. Commit.
3. Switch to `main` and merge `conflict-a` into it (this works fine).
   - **GitHub Desktop:** *Current Branch > Choose a branch to merge into main > conflict-a*
   - **Visual Studio:** *Git > Merge...* and pick `conflict-a`
4. Now, still on `main`, merge `conflict-b` into it. **Conflict!**
5. Fix it. Open the file. Git has marked both versions like this:

   ```
   <<<<<<< HEAD
   your first tagline
   =======
   your second tagline
   >>>>>>> conflict-b
   ```

   Keep the one you want (or combine them), delete the marker lines (`<<<<<<<`, `=======`, `>>>>>>>`), save, then commit the merge.
   - **GitHub Desktop:** click **Open in Visual Studio** on the conflict screen
   - **Visual Studio:** use the **Merge Editor** that opens
6. Push `main` to GitHub.

*Command line:*

```
git checkout main
git checkout -b conflict-a        # edit tagline
git commit -am "Tagline A"
git checkout main
git checkout -b conflict-b        # edit SAME line differently
git commit -am "Tagline B"
git checkout main
git merge conflict-a              # works fine
git merge conflict-b              # CONFLICT!
# fix the file, then:
git add <file>
git commit
git push
```

---

## Task 11: Undo something

**Throw away changes you haven't committed yet:**

- **GitHub Desktop:** *Changes* tab, right-click the file, **Discard Changes**
- **Visual Studio:** *Git Changes* window, right-click the file, **Undo Changes**

**Undo a commit you already made** (safely, history is kept):

- **GitHub Desktop:** *History* tab, right-click the commit, **Revert Changes**
- **Visual Studio:** *Git > View Branch History*, right-click the commit, **Revert**

*Command line:* `git restore <file>` and `git revert <commit-id>`

---

## Bonus

Switch between branches and watch the files change on your screen as you go. That's the magic of Git!

**Extra commands to try:**

| Command | What it does |
| --- | --- |
| `git fetch` | Check for new changes **without** merging them |
| `git stash` / `git stash pop` | Temporarily shelve unfinished changes |
| `git branch -d <branch>` | Delete a branch you're done with |
| `git log --graph --oneline --all` | Draw your branches and merges |
| `git blame DummyRepo/main.cpp` | See who last changed each line |

---

## Quick glossary

| Term | Meaning |
| --- | --- |
| **Repository (repo)** | A project folder tracked by Git, including its full history |
| **Clone** | Download a copy of a repo to your PC |
| **Commit** | A saved snapshot of your changes, with a message |
| **Branch** | A separate line of work, so you can experiment safely |
| **Push** | Upload your commits to GitHub |
| **Pull** | Download the latest changes from GitHub |
| **Pull request (PR)** | A proposal to merge one branch into another |
| **Merge** | Combine the changes from one branch into another |
| **Merge conflict** | Two branches changed the same line differently, so you choose which to keep |
