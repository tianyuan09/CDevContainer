# C/C++ Course Workspace

Welcome to your development environment for this course. This repository contains everything you need to write, compile, and debug C17 and C++20 programs directly in the cloud using GitHub Codespaces.

---

## Step 1: Create Your Personal Copy

Do not launch a Codespace directly on the instructor's template repository, or your work will not save. Follow these steps to make your own copy:

1. Click the green "Use this template" button at the top-right of this page.
2. Select "Create a new repository" from the dropdown menu.
3. Name your repository clearly (for example: c-cpp-coursework).
4. Set the visibility to Private so other students cannot copy your code.
5. Click "Create repository from template".

---

## Step 2: Launch Your Coding Environment

Once your personal repository finishes loading:
1. Click the green "<> Code" button.
2. Select the "Codespaces" tab.
3. Click "Create codespace on main".

Note: The initial configuration may take 1 to 2 minutes to install the necessary toolchains (Clang 18 and GCC 13) and activate extensions. 

---

## Step 3: How to Run Your Code

You do not need to use manual terminal compilation commands. To execute any source file:

1. Open any C (.c) or C++ (.cpp) file from the left sidebar file explorer.
2. Look at the top-right corner of the editor window.
3. Click the Play button symbol (or use the shortcut Ctrl+Alt+N).

The terminal panel at the bottom will automatically save your file, clear previous execution logs, compile your script with the required language standard options, and output the result.

---

## Workspace Folder Structure

Organize your work by creating individual folders inside this workspace directory:
* week01_intro/ - Basic syntax and verification tasks.
* week02_variables/ - Working with data types and user inputs.

If you experience unexpected linting or syntax highlighting warnings despite successful builds, open the Command Palette (Ctrl+Shift+P) and run: C/C++: Reset IntelliSense Database.
