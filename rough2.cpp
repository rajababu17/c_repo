// // #include <bits/stdc++.h>

// // using namespace std;

// // string ltrim(const string &);
// // string rtrim(const string &);
// // vector<string> split(const string &);

// // /*
// //  * Complete the 'rotLeft' function below.
// //  *
// //  * The function is expected to return an INTEGER_ARRAY.
// //  * The function accepts following parameters:
// //  *  1. INTEGER_ARRAY a
// //  *  2. INTEGER d
// //  */

// // vector<int> rotLeft(vector<int> a, int d ,int n) {
// //     int temp;
// //     int i=0;
// //     int j=0;
// //     while (i<d) {
// //         temp=a[j];
// //         for ( j=0; j<n-1; j++) {
// //             a[j]=a[j+1];
// //         }
// //         a[j]=temp;
// //         i++;
// //         j=0;
        
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout<<a[i]<<endl;
// //     }
    
// //     return a;

// // }

// // int main()
// // {
// //     ofstream fout(getenv("OUTPUT_PATH"));

// //     string first_multiple_input_temp;
// //     getline(cin, first_multiple_input_temp);

// //     vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

// //     int n = stoi(first_multiple_input[0]);

// //     int d = stoi(first_multiple_input[1]);

// //     string a_temp_temp;
// //     getline(cin, a_temp_temp);

// //     vector<string> a_temp = split(rtrim(a_temp_temp));

// //     vector<int> a(n);

// //     for (int i = 0; i < n; i++) {
// //         int a_item = stoi(a_temp[i]);

// //         a[i] = a_item;
// //     }

// //     vector<int> result = rotLeft(a, d,n);

// //     for (size_t i = 0; i < result.size(); i++) {
// //         fout << result[i];

// //         if (i != result.size() - 1) {
// //             fout << " ";
// //         }
// //     }

// //     fout << "\n";

// //     fout.close();

// //     return 0;
// // }

// // string ltrim(const string &str) {
// //     string s(str);

// //     s.erase(
// //         s.begin(),
// //         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
// //     );

// //     return s;
// // }

// // string rtrim(const string &str) {
// //     string s(str);

// //     s.erase(
// //         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
// //         s.end()
// //     );

// //     return s;
// // }

// // vector<string> split(const string &str) {
// //     vector<string> tokens;

// //     string::size_type start = 0;
// //     string::size_type end = 0;

// //     while ((end = str.find(" ", start)) != string::npos) {
// //         tokens.push_back(str.substr(start, end - start));

// //         start = end + 1;
// //     }

// //     tokens.push_back(str.substr(start));

// //     return tokens;
// // }

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     // string s;
//     char s[2];
//     // char *s;
//     int  k;
//     int inc;
//     int temp;
//     // cin>>k;
//     cin>>s[0];
//     cout<<s[0]+2;
    
    
    
//     return 0;
// }
// #include <iostream>

// int main()
// {
//     char letter = 'z';
//     std::cout << static_cast<char>(letter + 1) << std::endl;
// }


// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);
// vector<string> split(const string &);

// /*
//  * Complete the 'rotLeft' function below.
//  *
//  * The function is expected to return an INTEGER_ARRAY.
//  * The function accepts following parameters:
//  *  1. INTEGER_ARRAY a
//  *  2. INTEGER d
//  */

// vector<int> rotLeft(vector<int> a, int d ,int n) {
//     int temp;
//     int i=0;
//     int j=0;
//     while (i<d) {
//         temp=a[j];
//         for ( j=0; j<n-1; j++) {
//             a[j]=a[j+1];
//         }
//         a[j]=temp;
//         i++;
//         j=0;

//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<endl;
//     }

//     return a;

// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string first_multiple_input_temp;
//     getline(cin, first_multiple_input_temp);

//     vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

//     int n = stoi(first_multiple_input[0]);

//     int d = stoi(first_multiple_input[1]);

//     string a_temp_temp;
//     getline(cin, a_temp_temp);

//     vector<string> a_temp = split(rtrim(a_temp_temp));

//     vector<int> a(n);

//     for (int i = 0; i < n; i++) {
//         int a_item = stoi(a_temp[i]);

//         a[i] = a_item;
//     }

//     vector<int> result = rotLeft(a, d,n);

//     for (size_t i = 0; i < result.size(); i++) {
//         fout << result[i];

//         if (i != result.size() - 1) {
//             fout << " ";
//         }
//     }

//     fout << "\n";

//     fout.close();

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }

// vector<string> split(const string &str) {
//     vector<string> tokens;

//     string::size_type start = 0;
//     string::size_type end = 0;

//     while ((end = str.find(" ", start)) != string::npos) {
//         tokens.push_back(str.substr(start, end - start));

//         start = end + 1;
//     }

//     tokens.push_back(str.substr(start));

//     return tokens;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s1;
    string str;
    // char *s;
    int k;
    int inc=0;
    int temp;
    cin >> k;
    getline(cin,s1);
    getline(cin,str);

    vector <char> s(k);
    for (int i = 0; i < k; i++)
    {
        s[i]=str[i];
    }
    

    cin >> inc;


    for (int i = 0; i < k; i++)
    {
        if ((int)s[i] >= 97 && (int)s[i] <= 122 )
        {
           
            temp = (int)s[i];
            temp=(122-temp)+1;
            temp=(27-temp)%26;
            temp=(temp+inc)%26;
            if (temp==0)
            {
                s[i]='z';
            }
            else{
                temp=96+temp;
                s[i] = (char)temp;

            }
            


        }
        else if ( (int)s[i] >= 65 && (int)s[i] <= 90)
        {
             temp = (int)s[i];
            temp=(90-temp)+1;
            temp=(27-temp)%26;
            temp=(temp+inc)%26;
            if (temp==0)
            {
                s[i]='Z';
            }
            else{
               
            temp=64+temp;
            s[i] = (char)temp;

            }

            
        }
        
    }
   for (int i = 0; i < k; i++)
   {
       cout<<s[i];
   }
   

    return 0;
}
