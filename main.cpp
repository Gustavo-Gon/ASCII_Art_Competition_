#include <iostream>

using namespace std;

int main() {
    // ANSI escape codes for different colors and reset
    const char* WHITE = "\033[37m";
    const char* GRAY = "\033[90m";
    const char* GREEN = "\033[32m";
    const char* DARK_GREEN = "\033[38;5;22m";
    const char* BROWN = "\033[33m";
    const char* RESET = "\033[0m";

    // Mountain range structure
    const char* snowRange[] = {
            "            ___                _________/#######\\_____________                   /########",
            "   ________/###\\      ______ /##################\\/############\\         ______/###########",
            " _/#############\\___/######/#####################\\#############\\_______/##################",
            "/################\\########/#######################\\#############/#########################",
    };

    const char* treeRange[] = {
            "^#^####^########^##########^#####^###^##^#####^####^####^#^#####^##^########^#####^###^###",
            "^^^^##^^^###^##^^^##^###^#^^^###^^^#^^^^^^###^^^##^^^##^^^^^###^^^^^^######^^^###^^^#^^^##",
            "^^^^#^^^^^#^^^^^^^#^^^#^^^^^^^#^^^^^^^^^^^^#^^^^^^^^^^^^^^^^#^^^^^^^^^####^^^^^#^^^^^^^^^#",
            "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
            "^^^^^^^^^^__________________________^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
            "^^^^^^^^^/++++++++++++++++++++++++++\\^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
            "######__/++++++++++++++++++++++++++++\\__^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
            "######|++++++++++++++++++++++++++++++++|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
            "#########|+    ++++++    +++++++    +|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
            "^########|+    ++++++    +++++++    +|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
            "^^#######|+    ++++++    +++++++    +|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
            "^^^#---------------------------------------^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
            "^^^^|\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
            "^^^^|/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"



    };



    // Draw the mountain range with snow
    for (int i = 0; i < 4; ++i) {
        cout << WHITE << snowRange[i] << RESET << endl;
    }

    // Draw the mountain range with trees
    for (int i = 0; i < 14; ++i) {
        for (int j = 0; j < 90; ++j) {
            switch (treeRange[i][j]) {
                case '-':
                    cout << GRAY;       // Lookout
                    break;
                case '^':
                    cout << DARK_GREEN;  // Trees
                    break;
                case '#':
                    cout << GREEN;   // mountain
                    break;
                default:
                    cout << RESET;  // Reset for spaces or other characters
            }
            cout << treeRange[i][j];
        }
        cout << RESET << endl;  // Reset at the end of each line
    }


    return 0;
}
