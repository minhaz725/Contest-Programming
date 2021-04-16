//
// Created by Minhaz on 3/27/2021.
//

#include <bits/stdc++.h>
using namespace std;

void computeLPSArray(char* pat, int M, int* lps);

// Prints occurrences of txt[] in pat[]
int KMPSearch(char* pat, char* txt, int cost)
{
    int repeat=0;
    int M = strlen(pat);
    int N = strlen(txt);

    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    int lps[M];

    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);

    int i = 0; // index for txt[]
    int j = 0; // index for pat[]
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }

        if (j == M) {
         //   printf("Found pattern at index %d ", i - j);
            j = lps[j - 1];
            repeat++;
        }

            // mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return repeat*cost;
}

// Fills lps[] for given patttern pat[0..M-1]
void computeLPSArray(char* pat, int M, int* lps)
{
    // length of the previous longest prefix suffix
    int len = 0;

    lps[0] = 0; // lps[0] is always 0

    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];

                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

string quesMarkReplacerC(string temp)
{
    //string temp = pat;
    for(char & i : temp)
    {
        if(i=='?') i='C';
    }
    return temp;
}

string quesMarkReplacerJ(string temp)
{
    //string temp = pat;
    for(char & i : temp)
    {
        if(i=='?') i='J';
    }
    return temp;
}



// Driver program to test above function
int main() {
    string s;
    char patCJ[] = "CJ";
    char patJC[] = "JC";
    int T;
    cin >> T;
    while (T--) {
            int x, y, costC = 0, costJ = 0;
            cin >> x >> y >> s;
            //char txt[] = "CJ?CC?";
            string temp = quesMarkReplacerC(s);
            char char_array[temp.length() + 1];
            strcpy(char_array, temp.c_str());
            costC += KMPSearch(patCJ, char_array, x);
            costC += KMPSearch(patJC, char_array, y);

            temp = quesMarkReplacerJ(s);
            char char_array2[temp.length() + 1];
            strcpy(char_array2, temp.c_str());
            costJ += KMPSearch(patCJ, char_array2, x);
            costJ += KMPSearch(patJC, char_array2, y);

            if (costC < costJ) cout << costC;
            else cout << costJ;
    }
    return 0;
}