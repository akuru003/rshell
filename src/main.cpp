#include <iostream> //cout and cin
#include <stdio.h>  // fork failure return and print f
#include <unistd.h> // fork() get login/hostname
#include <stdlib.h> //system null exit failure/success
#include <sys/types.h> 
#include <sys/stat.h> // for stat function call
#include <sys/wait.h>  // parent wait for child wait()
#include <vector>     // access to vector containers
#include <cstring>   // cstring functions
#include <sys/unistd.h>  
#include <cstdlib>               
using namespace std;

/**
 * Funtion tests the path entered by the user and returns true if the file/directory exists.
 * -e will check if it exists
 * -f checks if it is a regular file
 * -d checks if it is a directory
 * takes into account multiple flags passed in and auto uses e flag if no flags are passed in
 * Returns false otherwise
 * */
void test(string temp, int flag)
{
    string command5 = "";
    for(unsigned int i = 0; i < temp.size(); i++)   //remove space at end
    {
        if(temp.at(i) != ' ')
        {
            command5 += temp.at(i);
        }
    }
    temp.clear();
    temp = command5;
    command5.clear();
    struct stat test1;
    char *input;
    input = new char[temp.length()];
    for(unsigned int i = 0; i < temp.length(); i++)  // convert string to cstring in input
    {
          input[i] = temp[i];
    } 
    input[temp.length()] = '\0';
    if(stat(input, &test1) == -1)
    {
        if(flag == 1)
        {
            cout << "(False)" << endl;
        }
        if(flag == 2)
        {
            cout << "(False)" << endl;
        }
        if(flag == 3)
        {
            cout << "(False)" << endl;
        }
        if(flag == 4)
        {
            cout << "(False)" << endl;
            cout << "(False)" << endl;
        }
        if(flag == 5)
        {
             cout << "(False)" << endl;
             cout << "(False)" << endl;
        }
        if(flag == 6)
        {
             cout << "(False)" << endl;
             cout << "(False)" << endl;
        }
        if(flag == 7)
        {
             cout << "(False)" << endl;
             cout << "(False)" << endl;
        }
        if(flag == 8)
        {
             cout << "(False)" << endl;
             cout << "(False)" << endl;
        }
        if(flag == 9)
        {
             cout << "(False)" << endl;
             cout << "(False)" << endl;
        }
        if(flag == 10)
        {
             cout << "(False)" << endl;
             cout << "(False)" << endl;
             cout << "(False)" << endl;
        }
        if(flag == 11)
        {
             cout << "(False)" << endl;
             cout << "(False)" << endl;
             cout << "(False)" << endl;
        }
        if(flag == 12)
        {
             cout << "(False)" << endl;
             cout << "(False)" << endl;
             cout << "(False)" << endl;
        }
        if(flag == 13)
        {
             cout << "(False)" << endl;
             cout << "(False)" << endl;
             cout << "(False)" << endl;
        }
        if(flag == 14)
        {
             cout << "(False)" << endl;
             cout << "(False)" << endl;
             cout << "(False)" << endl;
        }
        if(flag == 15)
        {
             cout << "(False)" << endl;
             cout << "(False)" << endl;
             cout << "(False)" << endl;
        }
        return;
    }
    if(flag == 1)
    {
        cout << "(True)" << endl;
        return;
    }
    else if(flag == 2)
    {
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFREG:  printf("(True)\n");           
            break;
            default:       printf("(False)\n");               
            break;
        }
        return;
    }
    else if(flag == 3)
    {
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFDIR:  printf("(True)\n");              
            break;
            default:       printf("(False)\n");               
            break;
        }
        return;
    }
    else if(flag == 4)
    {
        cout << "(True)" << endl;
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFREG:  printf("(True)\n");           
            break;
            default:       printf("(False)\n");               
            break;
        }
        return;
    }
    else if(flag == 5)
    {
        cout << "(True)" << endl;
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFDIR:  printf("(True)\n");              
            break;
            default:       printf("(False)\n");               
            break;
        }
        return;
    }
    else if(flag == 6)
    {
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFREG:  printf("(True)\n");           
            break;
            default:       printf("(False)\n");               
            break;
        }
        cout << "(True)" << endl;
        return;
    }
    else if(flag == 7)
    {
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFREG:  printf("(True)\n");  
            printf("(False)\n");    
            break;
            case S_IFDIR:  printf("(False)\n");     
            printf("(True)\n");   
            break;
            default:       printf("(False)\n");    
            printf("(False)\n");
            break;
        }
        return;
    }
    else if(flag == 8)
    {
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFDIR:  printf("(True)\n");         
            printf("(True)\n");      
            break;
            default:       printf("(False)\n");           
            printf("(True)\n"); 
            break;
        }
        return;
    }
    else if(flag == 9)
    {
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFDIR:  printf("(True)\n");   
            printf("(False)\n");   
            break;
            case S_IFREG: printf("(False)\n");    
            printf("(True)\n");  
            break;
            default:       printf("(False)\n");    
            printf("(False)\n");     
            break;
        }
        return;
    }
    else if(flag == 10)
    {
        cout << "(True)" << endl;
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFREG:  printf("(True)\n");  
            printf("(False)\n");    
            break;
            case S_IFDIR:   printf("(False)\n"); 
            printf("(True)\n");   
            break;
            default:       printf("(False)\n");           
            printf("(False)\n");  
            break;
        }
        return;
    }
    else if(flag == 11)
    {
        cout << "(True)" << endl;
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFDIR:  printf("(True)\n");   
            printf("(False)\n");   
            break;
            case S_IFREG:  printf("(False)\n");   
            printf("(True)\n");  
            break;
            default:       printf("(False)\n");              
            printf("(False)\n");    
            break;
        }
        return;
    }
    else if(flag == 12)
    {
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFREG:  printf("(True)\n");  
            printf("(True)\n");  
            printf("(False)\n");    
            break;
            case S_IFDIR:    printf("(False)\n");   
            printf("(True)\n");   
            printf("(True)\n");   
            break;
            default:       printf("(False)\n");              
            printf("(True)\n");   
            printf("(False)\n");   
            break;
        }
        return;
    }
    else if(flag == 13)
    {
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFREG:  printf("(True)\n");  
            printf("(False)\n"); 
            printf("(True)\n");  
            break;
            case S_IFDIR:    printf("(False)\n");   
            printf("(True)\n");   
            printf("(True)\n");   
            break;
            default:       printf("(False)\n");              
            printf("(False)\n");   
            printf("(True)\n");   
            break;
        }
        return;
    }
    else if(flag == 14)
    {
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFDIR:    printf("(True)\n");   
            printf("(False)\n");   
            printf("(True)\n");   
            break;
            case S_IFREG:  printf("(False)\n");  
            printf("(True)\n"); 
            printf("(True)\n");  
            break;
            default:       printf("(False)\n");              
            printf("(False)\n");   
            printf("(True)\n");   
            break;
        }
        return;
    }
    else if(flag == 15)
    {
        switch(test1.st_mode & S_IFMT) 
        {
            case S_IFDIR:    printf("(True)\n");   
            printf("(True)\n");   
            printf("(False)\n");   
            break;
            case S_IFREG:  printf("(False)\n");  
            printf("(True)\n"); 
            printf("(True)\n");  
            break;
            default:       printf("(False)\n");              
            printf("(True)\n");   
            printf("(False)\n");   
            break;
        }
        return;
    }
}

/*
 *  Function outputs user name and hostname and grabs the commands the user wants run
 * */
void getinput(string & command, int &check, char* loginname, char* hostname)
{
    cout << loginname << "@" << hostname << "$: ";                          // output name of user and host
    getline(cin,command);                                                  // get input 
    check = 0;
}

/*
 * Function will execute the command given in the string command
 * */
void executecommand(string command, int& passed)
{
    passed = 1;
    char* arg[100000];
    string temp = "";
    vector<string> s;
    for(unsigned int i = 0; i < command.size(); i++)    // removing space in command
    {
        if(command.at(i) != ' ')
        {
            temp += command.at(i);
        }
        if((command.at(i) == ' ' ) || (i == (command.size() - 1)))
        {
            if(temp.size() != 0)
            {
                s.push_back(temp);
            }
            temp.clear();
        }
    }
    for(unsigned int i = 0; i < s.size(); i++)  // set up c string with commands
    {
        string hold = s.at(i);
        arg[i] = (char*)hold.c_str();
    }
    arg[s.size()] = NULL; // adding NULL at end
    pid_t pid = fork();    // calling for process
    if(pid == 0)
    {
        if(execvp(arg[0],arg) == -1)       // child process to execute command
        {
            perror("exec");
            passed = 0;
            exit(1);
        }
    }
    if(pid > 1)                        // parent process
    {
        if(wait(0) == -1)
        {
            perror("wait");
            passed = 0;
            exit(1);
        }
    }
}

/*
* Function will execute a serious of commands given the proper vectors containing commands and connectors
* Requires of index of which part of the two d arrays to iterate through and returns a 1 for pass and 0 for fail
*/
void executecommand1(vector < vector < string > > A, vector < vector < string > > C, int &pass1, unsigned int index)  
{
    vector<string> v;
    vector<string> v3;
    vector<string> v2;
    vector<string> v4;
    for(unsigned int i = 0; i < A.at(index).size(); i++)
    {
        v3.push_back(A.at(index).at(i));
    }
    for(unsigned int i = 0; i < C.at(index).size(); i++)
    {
        string a = ";";
        if(C.at(index).at(i) == " ")
        {
            v.push_back(a);
        }
        else
        {
            v.push_back(C.at(index).at(i));
        }
    }
    v2 = v;
    v4 = v3;
    v.clear();
    v3.clear();
    for(int i = v2.size() - 1; i > -1; i--)
    {
        v.push_back(v2.at(i));
    }
    for(int i = v4.size() - 1; i > -1; i--)
    {
        v3.push_back(v4.at(i));
    }
    
        int pass = 0;       // used to check if we got an error
        int skip = 0;      // used for skipping connectors
        string tracker = v.at(v.size() - 1); // get first connector
        string tracker2 = v3.at(v3.size() - 1);  // get first command
        unsigned int flag = 1;
        unsigned int counter4 = 0;
        unsigned int counter5 = 0;
        string command3 = "";
        if(tracker2.size() > 4)
        {
           if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
           {
              counter5++;
              for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
              {
                  if(i < tracker2.size() - 1)
                  {
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                      {
                          flag = 1;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                      {
                          flag = 2;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                      {
                          flag = 3;
                      }
                  }
                  if(i < tracker2.size() - 2)
                  {
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                      {
                          flag = 4;
                      }
                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                      {
                          flag = 5;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                      {
                          flag = 6;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                      {
                          flag = 7;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                      {
                          flag = 8;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                      {
                          flag = 9;
                      }
                  }
                  if(i < tracker2.size() - 3)
                  {
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                      {
                          flag = 10;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                      {
                          flag = 11;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                      {
                          flag = 12;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                      {
                          flag = 13;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                      {
                          flag = 14;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                      {
                          flag = 15;
                      }
                  }
              }
              for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
              {
                  if((tracker2.at(i) == '/') && (counter4 == 0))
                  {
                      command3 += tracker2.at(i + 1);
                      counter4++;
                      i++;
                  }
                  else if(counter4 == 1)
                  {
                      command3 += tracker2.at(i);
                  }
              }
              tracker2.clear();
              tracker2 = command3;
              command3.clear();
              test(tracker2,flag);             // execute test command calling stat on it
           }
       }
        if((tracker2.size() > 2) && (counter5 == 0))
        {
           if(tracker2.at(0) == '[')
           {
              counter5++;
              for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
              {
                  if(i < tracker2.size() - 1)   // set flags
                  {
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                      {
                          flag = 1;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                      {
                          flag = 2;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                      {
                          flag = 3;
                      }
                  }
                  if(i < tracker2.size() - 2)
                  {
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                      {
                          flag = 4;
                      }
                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                      {
                          flag = 5;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                      {
                          flag = 6;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                      {
                          flag = 7;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                      {
                          flag = 8;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                      {
                          flag = 9;
                      }
                  }
                  if(i < tracker2.size() - 3)
                  {
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                      {
                          flag = 10;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                      {
                          flag = 11;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                      {
                          flag = 12;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                      {
                          flag = 13;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                      {
                          flag = 14;
                      }
                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                      {
                          flag = 15;
                      }
                  }
              }
              for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
              {
                  if((tracker2.at(i) == '/') && (counter4 == 0))
                  {
                      command3 += tracker2.at(i + 1);
                      counter4++;
                      i++;
                  }
                  else if(counter4 == 1)
                  {
                      if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                      {
                          command3 += tracker2.at(i);
                      }
                  }
              }
              tracker2.clear();
              tracker2 = command3;
              command3.clear();
              test(tracker2,flag);  // execute test command via stat method
           }
       }
        if(tracker2 == "exit")
        {   
            exit(0);
        }     
        if(counter5 == 0)
        {
           executecommand(tracker2,pass); // execute non exit/test command
        }
        v3.pop_back(); // remove from vector
        do                    // loop to cycle through vectors executing or skipping commands, supports exit command
        {
	        	if(tracker.at(0) == ';')  // ; =  always execute next command
		        {
		        	v.pop_back();
			        skip = 1;
		        }	
	        	if((tracker.at(0) == '&') && (pass == 1) && (skip == 0)) // execute command if previous command passed
	        	{
		        	v.pop_back();
		        	if((v.size() != 0) && (v3.size() != 0))    
			        {
				        tracker = v.at(v.size() - 1);
				        tracker2 = v3.at(v3.size() - 1);
                        unsigned int counter4 = 0;
                        unsigned int counter5 = 0;
                        string command3 = "";
                        if(tracker2.size() > 4)
                        {
                           if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
                           {
                              counter5++;
                              for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                              {
                                  if(i < tracker2.size() - 1)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                      {
                                          flag = 1;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                      {
                                          flag = 2;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                      {
                                          flag = 3;
                                      }
                                  }
                                  if(i < tracker2.size() - 2)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 4;
                                      }
                                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 5;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 6;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 7;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 8;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 9;
                                      }
                                  }
                                  if(i < tracker2.size() - 3)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 10;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 11;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 12;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 13;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 14;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 15;
                                      }
                                  }
                              }
                              for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                              {
                                  if((tracker2.at(i) == '/') && (counter4 == 0))
                                  {
                                      command3 += tracker2.at(i + 1);
                                      counter4++;
                                      i++;
                                  }
                                  else if(counter4 == 1)
                                  {
                                      command3 += tracker2.at(i);
                                  }
                              }
                              tracker2.clear();
                              tracker2 = command3;
                              command3.clear();
                              test(tracker2,flag);             // execute test command calling stat on it
                           }
                       }
                        if((tracker2.size() > 2) && (counter5 == 0))
                        {
                           if(tracker2.at(0) == '[')
                           {
                              counter5++;
                              for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                              {
                                  if(i < tracker2.size() - 1)   // set flags
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                      {
                                          flag = 1;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                      {
                                          flag = 2;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                      {
                                          flag = 3;
                                      }
                                  }
                                  if(i < tracker2.size() - 2)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 4;
                                      }
                                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 5;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 6;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 7;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 8;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 9;
                                      }
                                  }
                                  if(i < tracker2.size() - 3)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 10;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 11;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 12;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 13;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 14;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 15;
                                      }
                                  }
                              }
                              for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                              {
                                  if((tracker2.at(i) == '/') && (counter4 == 0))
                                  {
                                      command3 += tracker2.at(i + 1);
                                      counter4++;
                                      i++;
                                  }
                                  else if(counter4 == 1)
                                  {
                                      if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                                      {
                                          command3 += tracker2.at(i);
                                      }
                                  }
                              }
                              tracker2.clear();
                              tracker2 = command3;
                              command3.clear();
                              test(tracker2,flag);  // execute test command via stat method
                           }
                       }
            	        if(tracker2 == "exit")
                        {   
                            exit(0);
                        }     
            	        if(counter5 == 0)
            	        {
            	           executecommand(tracker2,pass); // execute non exit/test command
            	        }
				        v3.pop_back();
			        }
			        skip = 1;
		        }
		        else if((tracker.at(0) == '&') && (pass == 0) && (skip == 0)) // if didnt pass, remove the next command from vector
		        {          
		        	v.pop_back();
			        if (v3.size() != 0)
			        {       
		        		skip = 1;
		        	}
		        }
		        if((tracker.at(0) == '|') && (pass == 0) && (skip == 0))  // check if previous command failed and execute if it did
	        	{
		        	v.pop_back();
		        	if(v3.size() != 0)
			        {
				        tracker2 = v3.at(v3.size() - 1);
				        flag = 1;
                        unsigned int counter4 = 0;
                        unsigned int counter5 = 0;
                        string command3 = "";
                        if(tracker2.size() > 4)
                        {
                           if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
                           {
                              counter5++;
                              for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                              {
                                  if(i < tracker2.size() - 1)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                      {
                                          flag = 1;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                      {
                                          flag = 2;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                      {
                                          flag = 3;
                                      }
                                  }
                                  if(i < tracker2.size() - 2)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 4;
                                      }
                                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 5;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 6;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 7;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 8;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 9;
                                      }
                                  }
                                  if(i < tracker2.size() - 3)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 10;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 11;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 12;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 13;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 14;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 15;
                                      }
                                  }
                              }
                              for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                              {
                                  if((tracker2.at(i) == '/') && (counter4 == 0))
                                  {
                                      command3 += tracker2.at(i + 1);
                                      counter4++;
                                      i++;
                                  }
                                  else if(counter4 == 1)
                                  {
                                      command3 += tracker2.at(i);
                                  }
                              }
                              tracker2.clear();
                              tracker2 = command3;
                              command3.clear();
                              test(tracker2,flag);             // execute test command calling stat on it
                           }
                       }
                        if((tracker2.size() > 2) && (counter5 == 0))
                        {
                           if(tracker2.at(0) == '[')
                           {
                              counter5++;
                              for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                              {
                                  if(i < tracker2.size() - 1)   // set flags
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                      {
                                          flag = 1;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                      {
                                          flag = 2;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                      {
                                          flag = 3;
                                      }
                                  }
                                  if(i < tracker2.size() - 2)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 4;
                                      }
                                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 5;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 6;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 7;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 8;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 9;
                                      }
                                  }
                                  if(i < tracker2.size() - 3)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 10;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 11;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 12;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 13;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 14;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 15;
                                      }
                                  }
                              }
                              for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                              {
                                  if((tracker2.at(i) == '/') && (counter4 == 0))
                                  {
                                      command3 += tracker2.at(i + 1);
                                      counter4++;
                                      i++;
                                  }
                                  else if(counter4 == 1)
                                  {
                                      if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                                      {
                                          command3 += tracker2.at(i);
                                      }
                                  }
                              }
                              tracker2.clear();
                              tracker2 = command3;
                              command3.clear();
                              test(tracker2,flag);  // execute test command via stat method
                           }
                       }
            	        if(tracker2 == "exit")
                        {   
                            exit(0);
                        }     
            	        if(counter5 == 0)
            	        {
            	           executecommand(tracker2,pass); // execute non exit/test command
            	        }
				        v3.pop_back();
			        }
			        skip = 1;
		        }
		        else if((tracker.at(0) == '|') && (pass == 1) && (skip == 0))   // if it passed, remove command from vector list
	        	{
			        v.pop_back();
			        v3.pop_back();
			        skip = 1;
		        }
		        skip = 0;
		        if(v.size() != 0)
		        {
		        	tracker = v.at(v.size() - 1);  // get next connector
	        	}
		        else
		        {
		        	tracker = 'N';
		        }
		        if(v3.size() != 0)
		        {
			        tracker2 = v3.at(v3.size() - 1);   // get next command
		        }
		        else
		        {
			        tracker2 = "";
		        }
		        if((tracker.at(0) == ';') && (tracker2.size() > 1))   // execute command
	        	{
        	        unsigned int flag = 1;
                    unsigned int counter4 = 0;
                    unsigned int counter5 = 0;
                    string command3 = "";
                    if(tracker2.size() > 4)
                    {
                       if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
                       {
                          counter5++;
                          for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                          {
                              if(i < tracker2.size() - 1)
                              {
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                  {
                                      flag = 1;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                  {
                                      flag = 2;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                  {
                                      flag = 3;
                                  }
                              }
                              if(i < tracker2.size() - 2)
                              {
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                  {
                                      flag = 4;
                                  }
                                   if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                  {
                                      flag = 5;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                  {
                                      flag = 6;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                  {
                                      flag = 7;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                  {
                                      flag = 8;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                  {
                                      flag = 9;
                                  }
                              }
                              if(i < tracker2.size() - 3)
                              {
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                  {
                                      flag = 10;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                  {
                                      flag = 11;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                  {
                                      flag = 12;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                  {
                                      flag = 13;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                  {
                                      flag = 14;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                  {
                                      flag = 15;
                                  }
                              }
                          }
                          for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                          {
                              if((tracker2.at(i) == '/') && (counter4 == 0))
                              {
                                  command3 += tracker2.at(i + 1);
                                  counter4++;
                                  i++;
                              }
                              else if(counter4 == 1)
                              {
                                  command3 += tracker2.at(i);
                              }
                          }
                          tracker2.clear();
                          tracker2 = command3;
                          command3.clear();
                          test(tracker2,flag);             // execute test command calling stat on it
                       }
                   }
                    if((tracker2.size() > 2) && (counter5 == 0))
                    {
                       if(tracker2.at(0) == '[')
                       {
                          counter5++;
                          for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                          {
                              if(i < tracker2.size() - 1)   // set flags
                              {
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                  {
                                      flag = 1;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                  {
                                      flag = 2;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                  {
                                      flag = 3;
                                  }
                              }
                              if(i < tracker2.size() - 2)
                              {
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                  {
                                      flag = 4;
                                  }
                                   if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                  {
                                      flag = 5;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                  {
                                      flag = 6;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                  {
                                      flag = 7;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                  {
                                      flag = 8;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                  {
                                      flag = 9;
                                  }
                              }
                              if(i < tracker2.size() - 3)
                              {
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                  {
                                      flag = 10;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                  {
                                      flag = 11;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                  {
                                      flag = 12;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                  {
                                      flag = 13;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                  {
                                      flag = 14;
                                  }
                                  if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                  {
                                      flag = 15;
                                  }
                              }
                          }
                          for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                          {
                              if((tracker2.at(i) == '/') && (counter4 == 0))
                              {
                                  command3 += tracker2.at(i + 1);
                                  counter4++;
                                  i++;
                              }
                              else if(counter4 == 1)
                              {
                                  if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                                  {
                                      command3 += tracker2.at(i);
                                  }
                              }
                          }
                          tracker2.clear();
                          tracker2 = command3;
                          command3.clear();
                          test(tracker2,flag);  // execute test command via stat method
                       }
                   }
        	        if(tracker2 == "exit")
                    {   
                        exit(0);
                    }     
        	        if(counter5 == 0)
        	        {
        	           executecommand(tracker2,pass); // execute non exit/test command
        	        }
		        	v3.pop_back();
	        	}
	        	else if((tracker.at(0) == '|') && (tracker2.size() > 1))  // execute if previous one failed
		        {
			        if(pass == 0)
			        {
			            unsigned int flag = 1;
                        unsigned int counter4 = 0;
                        unsigned int counter5 = 0;
                        string command3 = "";
                        if(tracker2.size() > 4)
                        {
                           if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
                           {
                              counter5++;
                              for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                              {
                                  if(i < tracker2.size() - 1)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                      {
                                          flag = 1;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                      {
                                          flag = 2;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                      {
                                          flag = 3;
                                      }
                                  }
                                  if(i < tracker2.size() - 2)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 4;
                                      }
                                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 5;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 6;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 7;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 8;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 9;
                                      }
                                  }
                                  if(i < tracker2.size() - 3)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 10;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 11;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 12;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 13;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 14;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 15;
                                      }
                                  }
                              }
                              for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                              {
                                  if((tracker2.at(i) == '/') && (counter4 == 0))
                                  {
                                      command3 += tracker2.at(i + 1);
                                      counter4++;
                                      i++;
                                  }
                                  else if(counter4 == 1)
                                  {
                                      command3 += tracker2.at(i);
                                  }
                              }
                              tracker2.clear();
                              tracker2 = command3;
                              command3.clear();
                              test(tracker2,flag);             // execute test command calling stat on it
                           }
                       }
                        if((tracker2.size() > 2) && (counter5 == 0))
                        {
                           if(tracker2.at(0) == '[')
                           {
                              counter5++;
                              for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                              {
                                  if(i < tracker2.size() - 1)   // set flags
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                      {
                                          flag = 1;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                      {
                                          flag = 2;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                      {
                                          flag = 3;
                                      }
                                  }
                                  if(i < tracker2.size() - 2)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 4;
                                      }
                                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 5;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 6;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 7;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 8;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 9;
                                      }
                                  }
                                  if(i < tracker2.size() - 3)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 10;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 11;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 12;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 13;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 14;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 15;
                                      }
                                  }
                              }
                              for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                              {
                                  if((tracker2.at(i) == '/') && (counter4 == 0))
                                  {
                                      command3 += tracker2.at(i + 1);
                                      counter4++;
                                      i++;
                                  }
                                  else if(counter4 == 1)
                                  {
                                      if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                                      {
                                          command3 += tracker2.at(i);
                                      }
                                  }
                              }
                              tracker2.clear();
                              tracker2 = command3;
                              command3.clear();
                              test(tracker2,flag);  // execute test command via stat method
                           }
                       }
            	        if(tracker2 == "exit")
                        {   
                            exit(0);
                        }     
            	        if(counter5 == 0)
            	        {
            	           executecommand(tracker2,pass); // execute non exit/test command
            	        }
				        v3.pop_back();
			        }
		        }
		        else if((tracker.at(0) == '&') && (tracker2.size() > 1))  // execute if previous one passed
		        {
			        if(pass == 1)
			        {
                        unsigned int counter4 = 0;
                        unsigned int counter5 = 0;
                        string command3 = "";
                        if(tracker2.size() > 4)
                        {
                           if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
                           {
                              counter5++;
                              for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                              {
                                  if(i < tracker2.size() - 1)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                      {
                                          flag = 1;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                      {
                                          flag = 2;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                      {
                                          flag = 3;
                                      }
                                  }
                                  if(i < tracker2.size() - 2)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 4;
                                      }
                                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 5;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 6;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 7;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 8;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 9;
                                      }
                                  }
                                  if(i < tracker2.size() - 3)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 10;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 11;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 12;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 13;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 14;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 15;
                                      }
                                  }
                              }
                              for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                              {
                                  if((tracker2.at(i) == '/') && (counter4 == 0))
                                  {
                                      command3 += tracker2.at(i + 1);
                                      counter4++;
                                      i++;
                                  }
                                  else if(counter4 == 1)
                                  {
                                      command3 += tracker2.at(i);
                                  }
                              }
                              tracker2.clear();
                              tracker2 = command3;
                              command3.clear();
                              test(tracker2,flag);             // execute test command calling stat on it
                           }
                       }
                        if((tracker2.size() > 2) && (counter5 == 0))
                        {
                           if(tracker2.at(0) == '[')
                           {
                              counter5++;
                              for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                              {
                                  if(i < tracker2.size() - 1)   // set flags
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                      {
                                          flag = 1;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                      {
                                          flag = 2;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                      {
                                          flag = 3;
                                      }
                                  }
                                  if(i < tracker2.size() - 2)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 4;
                                      }
                                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 5;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 6;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 7;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 8;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 9;
                                      }
                                  }
                                  if(i < tracker2.size() - 3)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 10;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 11;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 12;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 13;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 14;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 15;
                                      }
                                  }
                              }
                              for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                              {
                                  if((tracker2.at(i) == '/') && (counter4 == 0))
                                  {
                                      command3 += tracker2.at(i + 1);
                                      counter4++;
                                      i++;
                                  }
                                  else if(counter4 == 1)
                                  {
                                      if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                                      {
                                          command3 += tracker2.at(i);
                                      }
                                  }
                              }
                              tracker2.clear();
                              tracker2 = command3;
                              command3.clear();
                              test(tracker2,flag);  // execute test command via stat method
                           }
                       }
            	        if(tracker2 == "exit")
                        {   
                            exit(0);
                        }     
            	        if(counter5 == 0)
            	        {
            	           executecommand(tracker2,pass); // execute non exit/test command
            	        }
			    	    v3.pop_back();
			        }
		        }
		        else
		        {
		    	    if(tracker2.size() > 1)       
		    	    {
		    	        unsigned int flag = 1;
                        unsigned int counter4 = 0;
                        unsigned int counter5 = 0;
                        string command3 = "";
                        if(tracker2.size() > 4)
                        {
                           if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
                           {
                              counter5++;
                              for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                              {
                                  if(i < tracker2.size() - 1)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                      {
                                          flag = 1;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                      {
                                          flag = 2;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                      {
                                          flag = 3;
                                      }
                                  }
                                  if(i < tracker2.size() - 2)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 4;
                                      }
                                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 5;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 6;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 7;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 8;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 9;
                                      }
                                  }
                                  if(i < tracker2.size() - 3)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 10;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 11;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 12;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 13;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 14;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 15;
                                      }
                                  }
                              }
                              for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                              {
                                  if((tracker2.at(i) == '/') && (counter4 == 0))
                                  {
                                      command3 += tracker2.at(i + 1);
                                      counter4++;
                                      i++;
                                  }
                                  else if(counter4 == 1)
                                  {
                                      command3 += tracker2.at(i);
                                  }
                              }
                              tracker2.clear();
                              tracker2 = command3;
                              command3.clear();
                              test(tracker2,flag);             // execute test command calling stat on it
                           }
                       }
                        if((tracker2.size() > 2) && (counter5 == 0))
                        {
                           if(tracker2.at(0) == '[')
                           {
                              counter5++;
                              for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                              {
                                  if(i < tracker2.size() - 1)   // set flags
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                      {
                                          flag = 1;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                      {
                                          flag = 2;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                      {
                                          flag = 3;
                                      }
                                  }
                                  if(i < tracker2.size() - 2)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 4;
                                      }
                                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 5;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 6;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 7;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 8;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 9;
                                      }
                                  }
                                  if(i < tracker2.size() - 3)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 10;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 11;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 12;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 13;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 14;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 15;
                                      }
                                  }
                              }
                              for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                              {
                                  if((tracker2.at(i) == '/') && (counter4 == 0))
                                  {
                                      command3 += tracker2.at(i + 1);
                                      counter4++;
                                      i++;
                                  }
                                  else if(counter4 == 1)
                                  {
                                      if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                                      {
                                          command3 += tracker2.at(i);
                                      }
                                  }
                              }
                              tracker2.clear();
                              tracker2 = command3;
                              command3.clear();
                              test(tracker2,flag);  // execute test command via stat method
                           }
                       }
            	        if(tracker2 == "exit")
                        {   
                            exit(0);
                        }     
            	        if(counter5 == 0)
            	        {
            	           executecommand(tracker2,pass); // execute non exit/test command
            	        }
		    	    	v3.pop_back();
		    	    }
		        }
        }
        while((v3.size() != 0) && (v.size() != 0));  // loop until vectors are empty meaning all user inputs were run 
        pass1 = pass;
}

int main()
{
    int check = 0;
    vector<char> v;               // vector to take in connectors 
    vector<char> v2; 
    vector<string> v3;            // vector to take in strings
    vector<string> v4;
    string command = "";
    char hostname[128];
    gethostname(hostname, sizeof hostname);   // get hostname and save in c string
    char loginname[128];
    getlogin_r(loginname, sizeof loginname);  // get loginname and save in c string
    getinput(command,check,loginname,hostname);  
    while (command != "exit")
    {
        for (unsigned int i = 0; i < command.size(); i++)     // check to see how many commands are in the string and store it
	    { 
	        if ((command.at(i) == ';') || (command.at(i) == '&') || (command.at(i) == '|'))
	        {
 	             check = 1;
		         v.push_back(command.at(i));   // push  back connectors 
	        }
	    }
	    for (unsigned int i = 0; i < command.size(); i++)     // check to see how many commands are in the string and store it
	    { 
	        if ((command.at(i) == '(') || (command.at(i) == ')'))
	        {
 	             check = 2;
	        }
	    }
        if(command.size() == 0) // used if user presses enter
        {
            // do nothing
        }
        else if (check == 0) // only one command was entered 
	    { 
           string command2 = "";
           unsigned int counter = 0;
           unsigned int counter2 = 0;
           for(counter = 0; counter < command.size(); counter++)   // removes the '#' except for echo commands
           {
               if((command.at(counter) != '#') && (counter2 == 0))
               {
                   command2 += command.at(counter);
               }
               else if((command.at(counter) == '#') && (counter2 == 0))
               {
                   if(command2.at(0) == 'e')
                   {
                       command2 += command.at(counter);
                   }
                   else
                   {
                       counter2 = 1;
                   }
               }
               else
               {
                   counter2 = 1;
               }
           }
           command.clear();
           command = command2;
	       int pass = 1;
	       int flag = 1;
	       string command3 = "";
	       unsigned int counter3 = 0;
	       for(unsigned int i = 0; i < command.size(); i++)  // remove spaces at start
	       {
	           if(counter3 == 0)
	           {
	               if(command.at(i) != ' ')
	               {
	                   command3 += command.at(i);
	                   counter3++;
	               }
	           }
	           else if(counter3 == 1)
	           {
	                command3 += command.at(i);
	           }
	       }
	       command.clear();
           command = command3;
           command3.clear();
           unsigned int counter4 = 0;
           unsigned int counter5 = 0;
           if(command.size() > 4)
           {
               if((command.at(0) == 't') && (command.at(1) == 'e') && (command.at(2) == 's') && (command.at(3) == 't'))
               {
                   counter5++;
                  for(unsigned int i = 4; i < command.size(); i++)   // set flags
                  {
                      if(i < command.size() - 1)
                      {
                          if((command.at(i) == '-') && (command.at(i + 1) == 'e'))
                          {
                              flag = 1;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'f'))
                          {
                              flag = 2;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'd'))
                          {
                              flag = 3;
                          }
                      }
                      if(i < command.size() - 2)
                      {
                          if((command.at(i) == '-') && (command.at(i + 1) == 'e') && (command.at(i + 2) == 'f'))
                          {
                              flag = 4;
                          }
                           if((command.at(i) == '-') && (command.at(i + 1) == 'e') && (command.at(i + 2) == 'd'))
                          {
                              flag = 5;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'f') && (command.at(i + 2) == 'e'))
                          {
                              flag = 6;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'f') && (command.at(i + 2) == 'd'))
                          {
                              flag = 7;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'd') && (command.at(i + 2) == 'e'))
                          {
                              flag = 8;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'd') && (command.at(i + 2) == 'f'))
                          {
                              flag = 9;
                          }
                      }
                      if(i < command.size() - 3)
                      {
                          if((command.at(i) == '-') && (command.at(i + 1) == 'e') && (command.at(i + 2) == 'f') && (command.at(i + 3) == 'd'))
                          {
                              flag = 10;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'e') && (command.at(i + 2) == 'd') && (command.at(i + 3) == 'f'))
                          {
                              flag = 11;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'f') && (command.at(i + 2) == 'e') && (command.at(i + 3) == 'd'))
                          {
                              flag = 12;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'f') && (command.at(i + 2) == 'd') && (command.at(i + 3) == 'e'))
                          {
                              flag = 13;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'd') && (command.at(i + 2) == 'f') && (command.at(i + 3) == 'e'))
                          {
                              flag = 14;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'd') && (command.at(i + 2) == 'e') && (command.at(i + 3) == 'f'))
                          {
                              flag = 15;
                          }
                      }
                  }
                  for(unsigned int i = 4; i < command.size(); i++)  // get part of message we want
                  {
                      if((command.at(i) == '/') && (counter4 == 0))
                      {
                          command3 += command.at(i + 1);
                          counter4++;
                          i++;
                      }
                      else if(counter4 == 1)
                      {
                          command3 += command.at(i);
                      }
                  }
                  command.clear();
                  command = command3;
                  command3.clear();
                  test(command,flag);             // execute test command calling stat on it
               }
           }
           if((command.size() > 2) && (counter5 == 0))
           {
               if(command.at(0) == '[')
               {
                  counter5++;
                  for(unsigned int i = 1; i < command.size(); i++) // set flag number
                  {
                      if(i < command.size() - 1)   // set flags
                      {
                          if((command.at(i) == '-') && (command.at(i + 1) == 'e'))
                          {
                              flag = 1;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'f'))
                          {
                              flag = 2;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'd'))
                          {
                              flag = 3;
                          }
                      }
                      if(i < command.size() - 2)
                      {
                          if((command.at(i) == '-') && (command.at(i + 1) == 'e') && (command.at(i + 2) == 'f'))
                          {
                              flag = 4;
                          }
                           if((command.at(i) == '-') && (command.at(i + 1) == 'e') && (command.at(i + 2) == 'd'))
                          {
                              flag = 5;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'f') && (command.at(i + 2) == 'e'))
                          {
                              flag = 6;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'f') && (command.at(i + 2) == 'd'))
                          {
                              flag = 7;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'd') && (command.at(i + 2) == 'e'))
                          {
                              flag = 8;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'd') && (command.at(i + 2) == 'f'))
                          {
                              flag = 9;
                          }
                      }
                      if(i < command.size() - 3)
                      {
                          if((command.at(i) == '-') && (command.at(i + 1) == 'e') && (command.at(i + 2) == 'f') && (command.at(i + 3) == 'd'))
                          {
                              flag = 10;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'e') && (command.at(i + 2) == 'd') && (command.at(i + 3) == 'f'))
                          {
                              flag = 11;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'f') && (command.at(i + 2) == 'e') && (command.at(i + 3) == 'd'))
                          {
                              flag = 12;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'f') && (command.at(i + 2) == 'd') && (command.at(i + 3) == 'e'))
                          {
                              flag = 13;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'd') && (command.at(i + 2) == 'f') && (command.at(i + 3) == 'e'))
                          {
                              flag = 14;
                          }
                          if((command.at(i) == '-') && (command.at(i + 1) == 'd') && (command.at(i + 2) == 'e') && (command.at(i + 3) == 'f'))
                          {
                              flag = 15;
                          }
                      }
                  }
                  for(unsigned int i = 1; i < command.size(); i++)  // get part of message we want
                  {
                      if((command.at(i) == '/') && (counter4 == 0))
                      {
                          command3 += command.at(i + 1);
                          counter4++;
                          i++;
                      }
                      else if(counter4 == 1)
                      {
                          if((command.at(i) != ' ') && (command.at(i) != ']'))
                          {
                              command3 += command.at(i);
                          }
                      }
                  }
                  command.clear();
                  command = command3;
                  command3.clear();
                  test(command,flag);  // execute test command via stat method
               }
           }
	       if(command == "exit") // if command was exit, exit
	       {
                 exit(0);
	       }
	       if(counter5 == 0)
	       {
	           executecommand(command,pass); // execute non exit/test command
	       }
	    }
        else if(check == 1)    //used for multiple commands  but no parthenses
        {
            string temp = "";
            for(unsigned int i = 0; i < command.size(); i++)    // filter string to just get commands
            {
                if((command.at(i) != ';') && (command.at(i) != '&') && (command.at(i) != '|') && (command.at(i) != '(') && (command.at(i) != ')'))  
                {
                     temp += command.at(i);
                }
                else if(command.at(i) == ';')
                {
                     string command3 = "";
              	     unsigned int counter3 = 0;
              	     for(unsigned int i = 0; i < temp.size(); i++)  // remove spaces at start
            	     {
            	         if(counter3 == 0)
            	         {
                             if(temp.at(i) != ' ')
                             {
            	                  command3 += temp.at(i);
            	                  counter3++;
                             }
         	             }
            	         else if(counter3 == 1)
            	         {
            	             command3 += temp.at(i);
            	         }
            	     }
            	     temp.clear();
                     temp = command3;
                     command3.clear();
                     string command2 = "";
                     unsigned int counter = 0;
                     unsigned int counter2 = 0;
                     for(counter = 0; counter < temp.size(); counter++)   // removes the '#' except for echo commands
                     {
                         if((temp.at(counter) != '#') && (counter2 == 0))
                         {
                            command2 += temp.at(counter);
                         }
                         else if((temp.at(counter) == '#') && (counter2 == 0))
                         {
                             if(command2.at(0) == 'e')
                             {
                                 command2 += temp.at(counter);
                             }
                             else
                             {
                                 counter2 = 1;
                             }
                         }
                         else
                         {
                            counter2 = 1;
                         }
                     }
                     temp.clear();
                     temp = command2;
                     v3.push_back(temp);   // store command
                     temp.clear();
                }
                else if((command.at(i) == '|') || (command.at(i) == '&'))
                {
                     i++;
                     string command3 = "";
              	     unsigned int counter3 = 0;
              	     for(unsigned int i = 0; i < temp.size(); i++)  // remove spaces at start
            	     {
            	         if(counter3 == 0)
            	         {
                             if(temp.at(i) != ' ')
                             {
            	                  command3 += temp.at(i);
            	                  counter3++;
                             }
         	             }
            	         else if(counter3 == 1)
            	         {
            	             command3 += temp.at(i);
            	         }
            	     }
            	     temp.clear();
                     temp = command3;
                     command3.clear();
                     string command2 = "";
                     unsigned int counter = 0;
                     unsigned int counter2 = 0;
                     for(counter = 0; counter < temp.size(); counter++)   // removes the '#' except for echo commands
                     {
                         if((temp.at(counter) != '#') && (counter2 == 0))
                         {
                            command2 += temp.at(counter);
                         }
                         else if((temp.at(counter) == '#') && (counter2 == 0))
                         {
                             if(command2.at(0) == 'e')
                             {
                                 command2 += temp.at(counter);
                             }
                             else
                             {
                                 counter2 = 1;
                             }
                         }
                         else
                         {
                            counter2 = 1;
                         }
                     }
                     temp.clear();
                     temp = command2;
                     v3.push_back(temp);   // store command
                     temp.clear();
                }
                if((i == command.size() - 1) && (temp.size() > 0))       // push back last command that has no connector
                {
                     string command3 = "";
              	     unsigned int counter3 = 0;
              	     for(unsigned int i = 0; i < temp.size(); i++)  // remove spaces at start
            	     {
            	         if(counter3 == 0)
            	         {
                             if(temp.at(i) != ' ')
                             {
            	                  command3 += temp.at(i);
            	                  counter3++;
                             }
         	             }
            	         else if(counter3 == 1)
            	         {
            	             command3 += temp.at(i);
            	         }
            	     }
            	     temp.clear();
                     temp = command3;
                     command3.clear();
                     string command2 = "";
                     unsigned int counter = 0;
                     unsigned int counter2 = 0;
                     for(counter = 0; counter < temp.size(); counter++)   // removes the '#' except for echo commands
                     {
                         if((temp.at(counter) != '#') && (counter2 == 0))
                         {
                            command2 += temp.at(counter);
                         }
                         else if((temp.at(counter) == '#') && (counter2 == 0))
                         {
                             if(command2.at(0) == 'e')
                             {
                                 command2 += temp.at(counter);
                             }
                             else
                             {
                                 counter2 = 1;
                             }
                         }
                         else
                         {
                            counter2 = 1;
                         }
                     }
                     temp.clear();
                     temp = command2;
                     v3.push_back(temp);   // store command
                     temp.clear();
                }
            }
            v2 = v;
            v4 = v3;                             // swap the order of v and v3 so first inputs are at the back
            v.clear();
            v3.clear();
            for(int i = v2.size() - 1; i > -1; i--)
            {
                v.push_back(v2.at(i));
            }   
            for(int i = v4.size() - 1; i > -1; i--)
            {
                v3.push_back(v4.at(i));
            }
            int pass = 0;       // used to check if we got an error
            int skip = 0;      // used for skipping connectors
            char tracker = v.at(v.size() - 1); // get first connector
            string tracker2 = v3.at(v3.size() - 1);  // get first command
            unsigned int flag = 1;
            unsigned int counter4 = 0;
            unsigned int counter5 = 0;
            string command3 = "";
            if(tracker2.size() > 4)
            {
               if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
               {
                  counter5++;
                  for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                  {
                      if(i < tracker2.size() - 1)
                      {
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                          {
                              flag = 1;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                          {
                              flag = 2;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                          {
                              flag = 3;
                          }
                      }
                      if(i < tracker2.size() - 2)
                      {
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                          {
                              flag = 4;
                          }
                           if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                          {
                              flag = 5;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                          {
                              flag = 6;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                          {
                              flag = 7;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                          {
                              flag = 8;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                          {
                              flag = 9;
                          }
                      }
                      if(i < tracker2.size() - 3)
                      {
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                          {
                              flag = 10;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                          {
                              flag = 11;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                          {
                              flag = 12;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                          {
                              flag = 13;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                          {
                              flag = 14;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                          {
                              flag = 15;
                          }
                      }
                  }
                  for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                  {
                      if((tracker2.at(i) == '/') && (counter4 == 0))
                      {
                          command3 += tracker2.at(i + 1);
                          counter4++;
                          i++;
                      }
                      else if(counter4 == 1)
                      {
                          command3 += tracker2.at(i);
                      }
                  }
                  tracker2.clear();
                  tracker2 = command3;
                  command3.clear();
                  test(tracker2,flag);             // execute test command calling stat on it
               }
           }
            if((tracker2.size() > 2) && (counter5 == 0))
            {
               if(tracker2.at(0) == '[')
               {
                  counter5++;
                  for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                  {
                      if(i < tracker2.size() - 1)   // set flags
                      {
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                          {
                              flag = 1;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                          {
                              flag = 2;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                          {
                              flag = 3;
                          }
                      }
                      if(i < tracker2.size() - 2)
                      {
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                          {
                              flag = 4;
                          }
                           if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                          {
                              flag = 5;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                          {
                              flag = 6;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                          {
                              flag = 7;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                          {
                              flag = 8;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                          {
                              flag = 9;
                          }
                      }
                      if(i < tracker2.size() - 3)
                      {
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                          {
                              flag = 10;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                          {
                              flag = 11;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                          {
                              flag = 12;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                          {
                              flag = 13;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                          {
                              flag = 14;
                          }
                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                          {
                              flag = 15;
                          }
                      }
                  }
                  for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                  {
                      if((tracker2.at(i) == '/') && (counter4 == 0))
                      {
                          command3 += tracker2.at(i + 1);
                          counter4++;
                          i++;
                      }
                      else if(counter4 == 1)
                      {
                          if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                          {
                              command3 += tracker2.at(i);
                          }
                      }
                  }
                  tracker2.clear();
                  tracker2 = command3;
                  command3.clear();
                  test(tracker2,flag);  // execute test command via stat method
               }
           }
	        if(tracker2 == "exit")
            {   
                exit(0);
            }     
	        if(counter5 == 0)
	        {
	           executecommand(tracker2,pass); // execute non exit/test command
	        }
	        v3.pop_back(); // remove from vector
	        do                    // loop to cycle through vectors executing or skipping commands, supports exit command
	        {
    	        	if(tracker == ';')  // ; =  always execute next command
    		        {
    		        	v.pop_back();
    			        skip = 1;
    		        }	
    	        	if((tracker == '&') && (pass == 1) && (skip == 0)) // execute command if previous command passed
    	        	{
    		        	v.pop_back();
    			        v.pop_back();
    		        	if((v.size() != 0) && (v3.size() != 0))    
    			        {
    				        tracker = v.at(v.size() - 1);
    				        tracker2 = v3.at(v3.size() - 1);
    				        unsigned int flag = 1;
                            unsigned int counter4 = 0;
                            unsigned int counter5 = 0;
                            string command3 = "";
                            if(tracker2.size() > 4)
                            {
                               if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
                               {
                                  counter5++;
                                  for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                                  {
                                      if(i < tracker2.size() - 1)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                          {
                                              flag = 1;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                          {
                                              flag = 2;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                          {
                                              flag = 3;
                                          }
                                      }
                                      if(i < tracker2.size() - 2)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 4;
                                          }
                                           if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 5;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 6;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 7;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 8;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 9;
                                          }
                                      }
                                      if(i < tracker2.size() - 3)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 10;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 11;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 12;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 13;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 14;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 15;
                                          }
                                      }
                                  }
                                  for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                                  {
                                      if((tracker2.at(i) == '/') && (counter4 == 0))
                                      {
                                          command3 += tracker2.at(i + 1);
                                          counter4++;
                                          i++;
                                      }
                                      else if(counter4 == 1)
                                      {
                                          command3 += tracker2.at(i);
                                      }
                                  }
                                  tracker2.clear();
                                  tracker2 = command3;
                                  command3.clear();
                                  test(tracker2,flag);             // execute test command calling stat on it
                               }
                           }
                            if((tracker2.size() > 2) && (counter5 == 0))
                            {
                               if(tracker2.at(0) == '[')
                               {
                                  counter5++;
                                  for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                                  {
                                      if(i < tracker2.size() - 1)   // set flags
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                          {
                                              flag = 1;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                          {
                                              flag = 2;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                          {
                                              flag = 3;
                                          }
                                      }
                                      if(i < tracker2.size() - 2)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 4;
                                          }
                                           if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 5;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 6;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 7;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 8;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 9;
                                          }
                                      }
                                      if(i < tracker2.size() - 3)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 10;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 11;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 12;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 13;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 14;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 15;
                                          }
                                      }
                                  }
                                  for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                                  {
                                      if((tracker2.at(i) == '/') && (counter4 == 0))
                                      {
                                          command3 += tracker2.at(i + 1);
                                          counter4++;
                                          i++;
                                      }
                                      else if(counter4 == 1)
                                      {
                                          if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                                          {
                                              command3 += tracker2.at(i);
                                          }
                                      }
                                  }
                                  tracker2.clear();
                                  tracker2 = command3;
                                  command3.clear();
                                  test(tracker2,flag);  // execute test command via stat method
                               }
                           }
                	        if(tracker2 == "exit")
                            {   
                                exit(0);
                            }     
                	        if(counter5 == 0)
                	        {
                	           executecommand(tracker2,pass); // execute non exit/test command
                	        }
    				        v3.pop_back();
    			        }
    			        skip = 1;
    		        }
    		        else if((tracker == '&') && (pass == 0) && (skip == 0)) // if didnt pass, remove the next command from vector
    		        {          
    		        	v.pop_back();
    		        	v.pop_back();
    			        if (v3.size() != 0)
    			        {       
    		        		skip = 1;
    		        	}
    		        }
    		        if((tracker == '|') && (pass == 0) && (skip == 0))  // check if previous command failed and execute if it did
    	        	{
    		        	v.pop_back();
    		        	v.pop_back();
    		        	if(v3.size() != 0)
    			        {
    				        tracker2 = v3.at(v3.size() - 1);
    				        flag = 1;
                            unsigned int counter4 = 0;
                            unsigned int counter5 = 0;
                            string command3 = "";
                            if(tracker2.size() > 4)
                            {
                               if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
                               {
                                  counter5++;
                                  for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                                  {
                                      if(i < tracker2.size() - 1)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                          {
                                              flag = 1;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                          {
                                              flag = 2;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                          {
                                              flag = 3;
                                          }
                                      }
                                      if(i < tracker2.size() - 2)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 4;
                                          }
                                           if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 5;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 6;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 7;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 8;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 9;
                                          }
                                      }
                                      if(i < tracker2.size() - 3)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 10;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 11;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 12;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 13;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 14;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 15;
                                          }
                                      }
                                  }
                                  for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                                  {
                                      if((tracker2.at(i) == '/') && (counter4 == 0))
                                      {
                                          command3 += tracker2.at(i + 1);
                                          counter4++;
                                          i++;
                                      }
                                      else if(counter4 == 1)
                                      {
                                          command3 += tracker2.at(i);
                                      }
                                  }
                                  tracker2.clear();
                                  tracker2 = command3;
                                  command3.clear();
                                  test(tracker2,flag);             // execute test command calling stat on it
                               }
                           }
                            if((tracker2.size() > 2) && (counter5 == 0))
                            {
                               if(tracker2.at(0) == '[')
                               {
                                  counter5++;
                                  for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                                  {
                                      if(i < tracker2.size() - 1)   // set flags
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                          {
                                              flag = 1;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                          {
                                              flag = 2;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                          {
                                              flag = 3;
                                          }
                                      }
                                      if(i < tracker2.size() - 2)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 4;
                                          }
                                           if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 5;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 6;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 7;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 8;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 9;
                                          }
                                      }
                                      if(i < tracker2.size() - 3)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 10;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 11;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 12;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 13;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 14;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 15;
                                          }
                                      }
                                  }
                                  for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                                  {
                                      if((tracker2.at(i) == '/') && (counter4 == 0))
                                      {
                                          command3 += tracker2.at(i + 1);
                                          counter4++;
                                          i++;
                                      }
                                      else if(counter4 == 1)
                                      {
                                          if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                                          {
                                              command3 += tracker2.at(i);
                                          }
                                      }
                                  }
                                  tracker2.clear();
                                  tracker2 = command3;
                                  command3.clear();
                                  test(tracker2,flag);  // execute test command via stat method
                               }
                           }
                	        if(tracker2 == "exit")
                            {   
                                exit(0);
                            }     
                	        if(counter5 == 0)
                	        {
                	           executecommand(tracker2,pass); // execute non exit/test command
                	        }
    				        v3.pop_back();
    			        }
    			        skip = 1;
    		        }
    		        else if((tracker == '|') && (pass == 1) && (skip == 0))   // if it passed, remove command from vector list
    	        	{
    			        v.pop_back();
    			        v.pop_back();
    			        v3.pop_back();
    			        skip = 1;
    		        }
    		        skip = 0;
    		        if(v.size() != 0)
    		        {
    		        	tracker = v.at(v.size() - 1);  // get next connector
    	        	}
    		        else
    		        {
    		        	tracker = '0';
    		        }
    		        if(v3.size() != 0)
    		        {
    			        tracker2 = v3.at(v3.size() - 1);   // get next command
    		        }
    		        else
    		        {
    			        tracker2 = "";
    		        }
    		        if((tracker == ';') && (tracker2.size() > 1))   // execute command
    	        	{
	        	        unsigned int flag = 1;
                        unsigned int counter4 = 0;
                        unsigned int counter5 = 0;
                        string command3 = "";
                        if(tracker2.size() > 4)
                        {
                           if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
                           {
                              counter5++;
                              for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                              {
                                  if(i < tracker2.size() - 1)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                      {
                                          flag = 1;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                      {
                                          flag = 2;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                      {
                                          flag = 3;
                                      }
                                  }
                                  if(i < tracker2.size() - 2)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 4;
                                      }
                                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 5;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 6;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 7;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 8;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 9;
                                      }
                                  }
                                  if(i < tracker2.size() - 3)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 10;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 11;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 12;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 13;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 14;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 15;
                                      }
                                  }
                              }
                              for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                              {
                                  if((tracker2.at(i) == '/') && (counter4 == 0))
                                  {
                                      command3 += tracker2.at(i + 1);
                                      counter4++;
                                      i++;
                                  }
                                  else if(counter4 == 1)
                                  {
                                      command3 += tracker2.at(i);
                                  }
                              }
                              tracker2.clear();
                              tracker2 = command3;
                              command3.clear();
                              test(tracker2,flag);             // execute test command calling stat on it
                           }
                       }
                        if((tracker2.size() > 2) && (counter5 == 0))
                        {
                           if(tracker2.at(0) == '[')
                           {
                              counter5++;
                              for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                              {
                                  if(i < tracker2.size() - 1)   // set flags
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                      {
                                          flag = 1;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                      {
                                          flag = 2;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                      {
                                          flag = 3;
                                      }
                                  }
                                  if(i < tracker2.size() - 2)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 4;
                                      }
                                       if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 5;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 6;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                      {
                                          flag = 7;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                      {
                                          flag = 8;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                      {
                                          flag = 9;
                                      }
                                  }
                                  if(i < tracker2.size() - 3)
                                  {
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 10;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 11;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                      {
                                          flag = 12;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 13;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                      {
                                          flag = 14;
                                      }
                                      if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                      {
                                          flag = 15;
                                      }
                                  }
                              }
                              for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                              {
                                  if((tracker2.at(i) == '/') && (counter4 == 0))
                                  {
                                      command3 += tracker2.at(i + 1);
                                      counter4++;
                                      i++;
                                  }
                                  else if(counter4 == 1)
                                  {
                                      if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                                      {
                                          command3 += tracker2.at(i);
                                      }
                                  }
                              }
                              tracker2.clear();
                              tracker2 = command3;
                              command3.clear();
                              test(tracker2,flag);  // execute test command via stat method
                           }
                       }
            	        if(tracker2 == "exit")
                        {   
                            exit(0);
                        }     
            	        if(counter5 == 0)
            	        {
            	           executecommand(tracker2,pass); // execute non exit/test command
            	        }
    		        	v3.pop_back();
    	        	}
    	        	else if((tracker == '|') && (tracker2.size() > 1))  // execute if previous one failed
    		        {
    			        if(pass == 0)
    			        {
    			            unsigned int flag = 1;
                            unsigned int counter4 = 0;
                            unsigned int counter5 = 0;
                            string command3 = "";
                            if(tracker2.size() > 4)
                            {
                               if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
                               {
                                  counter5++;
                                  for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                                  {
                                      if(i < tracker2.size() - 1)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                          {
                                              flag = 1;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                          {
                                              flag = 2;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                          {
                                              flag = 3;
                                          }
                                      }
                                      if(i < tracker2.size() - 2)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 4;
                                          }
                                           if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 5;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 6;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 7;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 8;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 9;
                                          }
                                      }
                                      if(i < tracker2.size() - 3)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 10;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 11;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 12;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 13;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 14;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 15;
                                          }
                                      }
                                  }
                                  for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                                  {
                                      if((tracker2.at(i) == '/') && (counter4 == 0))
                                      {
                                          command3 += tracker2.at(i + 1);
                                          counter4++;
                                          i++;
                                      }
                                      else if(counter4 == 1)
                                      {
                                          command3 += tracker2.at(i);
                                      }
                                  }
                                  tracker2.clear();
                                  tracker2 = command3;
                                  command3.clear();
                                  test(tracker2,flag);             // execute test command calling stat on it
                               }
                           }
                            if((tracker2.size() > 2) && (counter5 == 0))
                            {
                               if(tracker2.at(0) == '[')
                               {
                                  counter5++;
                                  for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                                  {
                                      if(i < tracker2.size() - 1)   // set flags
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                          {
                                              flag = 1;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                          {
                                              flag = 2;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                          {
                                              flag = 3;
                                          }
                                      }
                                      if(i < tracker2.size() - 2)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 4;
                                          }
                                           if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 5;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 6;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 7;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 8;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 9;
                                          }
                                      }
                                      if(i < tracker2.size() - 3)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 10;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 11;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 12;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 13;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 14;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 15;
                                          }
                                      }
                                  }
                                  for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                                  {
                                      if((tracker2.at(i) == '/') && (counter4 == 0))
                                      {
                                          command3 += tracker2.at(i + 1);
                                          counter4++;
                                          i++;
                                      }
                                      else if(counter4 == 1)
                                      {
                                          if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                                          {
                                              command3 += tracker2.at(i);
                                          }
                                      }
                                  }
                                  tracker2.clear();
                                  tracker2 = command3;
                                  command3.clear();
                                  test(tracker2,flag);  // execute test command via stat method
                               }
                           }
                	        if(tracker2 == "exit")
                            {   
                                exit(0);
                            }     
                	        if(counter5 == 0)
                	        {
                	           executecommand(tracker2,pass); // execute non exit/test command
                	        }
    				        v3.pop_back();
    			        }
    		        }
    		        else if((tracker == '&') && (tracker2.size() > 1))  // execute if previous one passed
    		        {
    			        if(pass == 1)
    			        {
    			            unsigned int flag = 1;
                            unsigned int counter4 = 0;
                            unsigned int counter5 = 0;
                            string command3 = "";
                            if(tracker2.size() > 4)
                            {
                               if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
                               {
                                  counter5++;
                                  for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                                  {
                                      if(i < tracker2.size() - 1)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                          {
                                              flag = 1;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                          {
                                              flag = 2;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                          {
                                              flag = 3;
                                          }
                                      }
                                      if(i < tracker2.size() - 2)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 4;
                                          }
                                           if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 5;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 6;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 7;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 8;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 9;
                                          }
                                      }
                                      if(i < tracker2.size() - 3)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 10;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 11;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 12;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 13;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 14;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 15;
                                          }
                                      }
                                  }
                                  for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                                  {
                                      if((tracker2.at(i) == '/') && (counter4 == 0))
                                      {
                                          command3 += tracker2.at(i + 1);
                                          counter4++;
                                          i++;
                                      }
                                      else if(counter4 == 1)
                                      {
                                          command3 += tracker2.at(i);
                                      }
                                  }
                                  tracker2.clear();
                                  tracker2 = command3;
                                  command3.clear();
                                  test(tracker2,flag);             // execute test command calling stat on it
                               }
                           }
                            if((tracker2.size() > 2) && (counter5 == 0))
                            {
                               if(tracker2.at(0) == '[')
                               {
                                  counter5++;
                                  for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                                  {
                                      if(i < tracker2.size() - 1)   // set flags
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                          {
                                              flag = 1;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                          {
                                              flag = 2;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                          {
                                              flag = 3;
                                          }
                                      }
                                      if(i < tracker2.size() - 2)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 4;
                                          }
                                           if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 5;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 6;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 7;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 8;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 9;
                                          }
                                      }
                                      if(i < tracker2.size() - 3)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 10;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 11;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 12;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 13;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 14;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 15;
                                          }
                                      }
                                  }
                                  for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                                  {
                                      if((tracker2.at(i) == '/') && (counter4 == 0))
                                      {
                                          command3 += tracker2.at(i + 1);
                                          counter4++;
                                          i++;
                                      }
                                      else if(counter4 == 1)
                                      {
                                          if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                                          {
                                              command3 += tracker2.at(i);
                                          }
                                      }
                                  }
                                  tracker2.clear();
                                  tracker2 = command3;
                                  command3.clear();
                                  test(tracker2,flag);  // execute test command via stat method
                               }
                           }
                	        if(tracker2 == "exit")
                            {   
                                exit(0);
                            }     
                	        if(counter5 == 0)
                	        {
                	           executecommand(tracker2,pass); // execute non exit/test command
                	        }
    			    	    v3.pop_back();
    			        }
    		        }
    		        else
    		        {
    		    	    if(tracker2.size() > 1)       
    		    	    {
    		    	        unsigned int flag = 1;
                            unsigned int counter4 = 0;
                            unsigned int counter5 = 0;
                            string command3 = "";
                            if(tracker2.size() > 4)
                            {
                               if((tracker2.at(0) == 't') && (tracker2.at(1) == 'e') && (tracker2.at(2) == 's') && (tracker2.at(3) == 't'))
                               {
                                  counter5++;
                                  for(unsigned int i = 4; i < tracker2.size(); i++)   // set flags
                                  {
                                      if(i < tracker2.size() - 1)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                          {
                                              flag = 1;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                          {
                                              flag = 2;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                          {
                                              flag = 3;
                                          }
                                      }
                                      if(i < tracker2.size() - 2)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 4;
                                          }
                                           if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 5;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 6;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 7;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 8;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 9;
                                          }
                                      }
                                      if(i < tracker2.size() - 3)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 10;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 11;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 12;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 13;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 14;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 15;
                                          }
                                      }
                                  }
                                  for(unsigned int i = 4; i < tracker2.size(); i++)  // get part of message we want
                                  {
                                      if((tracker2.at(i) == '/') && (counter4 == 0))
                                      {
                                          command3 += tracker2.at(i + 1);
                                          counter4++;
                                          i++;
                                      }
                                      else if(counter4 == 1)
                                      {
                                          command3 += tracker2.at(i);
                                      }
                                  }
                                  tracker2.clear();
                                  tracker2 = command3;
                                  command3.clear();
                                  test(tracker2,flag);             // execute test command calling stat on it
                               }
                           }
                            if((tracker2.size() > 2) && (counter5 == 0))
                            {
                               if(tracker2.at(0) == '[')
                               {
                                  counter5++;
                                  for(unsigned int i = 1; i < tracker2.size(); i++) // set flag number
                                  {
                                      if(i < tracker2.size() - 1)   // set flags
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e'))
                                          {
                                              flag = 1;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f'))
                                          {
                                              flag = 2;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd'))
                                          {
                                              flag = 3;
                                          }
                                      }
                                      if(i < tracker2.size() - 2)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 4;
                                          }
                                           if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 5;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 6;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd'))
                                          {
                                              flag = 7;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e'))
                                          {
                                              flag = 8;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f'))
                                          {
                                              flag = 9;
                                          }
                                      }
                                      if(i < tracker2.size() - 3)
                                      {
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 10;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'e') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 11;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'd'))
                                          {
                                              flag = 12;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'f') && (tracker2.at(i + 2) == 'd') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 13;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'f') && (tracker2.at(i + 3) == 'e'))
                                          {
                                              flag = 14;
                                          }
                                          if((tracker2.at(i) == '-') && (tracker2.at(i + 1) == 'd') && (tracker2.at(i + 2) == 'e') && (tracker2.at(i + 3) == 'f'))
                                          {
                                              flag = 15;
                                          }
                                      }
                                  }
                                  for(unsigned int i = 1; i < tracker2.size(); i++)  // get part of message we want
                                  {
                                      if((tracker2.at(i) == '/') && (counter4 == 0))
                                      {
                                          command3 += tracker2.at(i + 1);
                                          counter4++;
                                          i++;
                                      }
                                      else if(counter4 == 1)
                                      {
                                          if((tracker2.at(i) != ' ') && (tracker2.at(i) != ']'))
                                          {
                                              command3 += tracker2.at(i);
                                          }
                                      }
                                  }
                                  tracker2.clear();
                                  tracker2 = command3;
                                  command3.clear();
                                  test(tracker2,flag);  // execute test command via stat method
                               }
                           }
                	        if(tracker2 == "exit")
                            {   
                                exit(0);
                            }     
                	        if(counter5 == 0)
                	        {
                	           executecommand(tracker2,pass); // execute non exit/test command
                	        }
    		    	    	v3.pop_back();
    		    	    }
    		        }
	        }
            while((v3.size() != 0) && (v.size() != 0));  // loop until vectors are empty meaning all user inputs were run 
        }
        else if(check == 2)    // used for precedence of multiple commands
        {
            vector < vector < string > > A;  // holds all arguments in indexes
            vector < vector < string > > C;  // holds connectors of arguments 
            vector<string> B;  // helper
            
            vector<string> D;  // helper
            vector<string> E;  // holds precedence connectors
            vector<string> W;
            string temp = "";
            for(unsigned int i = 0; i < command.size(); i++)    // filter string to just get commands in vec A
            {
                if((command.at(i) != ';') && (command.at(i) != '&') && (command.at(i) != '|') && (command.at(i) != '(') && (command.at(i) != ')'))  
                {
                     temp += command.at(i);
                }
                else if(command.at(i) == ';')
                {
                     string command3 = "";
              	     unsigned int counter3 = 0;
              	     for(unsigned int i = 0; i < temp.size(); i++)  // remove spaces at start
            	     {
            	         if(counter3 == 0)
            	         {
                             if(temp.at(i) != ' ')
                             {
            	                  command3 += temp.at(i);
            	                  counter3++;
                             }
         	             }
            	         else if(counter3 == 1)
            	         {
            	             command3 += temp.at(i);
            	         }
            	     }
            	     temp.clear();
                     temp = command3;
                     command3.clear();
                     string command2 = "";
                     unsigned int counter = 0;
                     unsigned int counter2 = 0;
                     for(counter = 0; counter < temp.size(); counter++)   // removes the '#' except for echo commands
                     {
                         if((temp.at(counter) != '#') && (counter2 == 0))
                         {
                            command2 += temp.at(counter);
                         }
                         else if((temp.at(counter) == '#') && (counter2 == 0))
                         {
                             if(command2.at(0) == 'e')
                             {
                                 command2 += temp.at(counter);
                             }
                             else
                             {
                                 counter2 = 1;
                             }
                         }
                         else
                         {
                            counter2 = 1;
                         }
                     }
                     temp.clear();
                     temp = command2;
                     if(temp.size() > 0)
                     {
                         B.push_back(temp);   // store command
                     }
                     temp.clear();
                }
                else if((command.at(i) == '|') || (command.at(i) == '&'))
                {
                     i++;
                     string command3 = "";
              	     unsigned int counter3 = 0;
              	     for(unsigned int i = 0; i < temp.size(); i++)  // remove spaces at start
            	     {
            	         if(counter3 == 0)
            	         {
                             if(temp.at(i) != ' ')
                             {
            	                  command3 += temp.at(i);
            	                  counter3++;
                             }
         	             }
            	         else if(counter3 == 1)
            	         {
            	             command3 += temp.at(i);
            	         }
            	     }
            	     temp.clear();
                     temp = command3;
                     command3.clear();
                     string command2 = "";
                     unsigned int counter = 0;
                     unsigned int counter2 = 0;
                     for(counter = 0; counter < temp.size(); counter++)   // removes the '#' except for echo commands
                     {
                         if((temp.at(counter) != '#') && (counter2 == 0))
                         {
                            command2 += temp.at(counter);
                         }
                         else if((temp.at(counter) == '#') && (counter2 == 0))
                         {
                             if(command2.at(0) == 'e')
                             {
                                 command2 += temp.at(counter);
                             }
                             else
                             {
                                 counter2 = 1;
                             }
                         }
                         else
                         {
                            counter2 = 1;
                         }
                     }
                     temp.clear();
                     temp = command2;
                     if(temp.size() > 0)
                     {
                         B.push_back(temp);   // store command
                     }
                     temp.clear();
                }
                if(command.at(i) == ')')
                {
                        string command3 = "";
                  	    unsigned int counter3 = 0;
                  	    for(unsigned int i = 0; i < temp.size(); i++)  // remove spaces at start
                	    {
                	         if(counter3 == 0)
                	         {
                                 if(temp.at(i) != ' ')
                                 {
                	                  command3 += temp.at(i);
                	                  counter3++;
                                 }
             	             }
                	         else if(counter3 == 1)
                	         {
                	             command3 += temp.at(i);
                	         }
                	     }
                	    temp.clear();
                        temp = command3;
                        command3.clear();
                        string command2 = "";
                        unsigned int counter = 0;
                        unsigned int counter2 = 0;
                        for(counter = 0; counter < temp.size(); counter++)   // removes the '#' except for echo commands
                        {
                             if((temp.at(counter) != '#') && (counter2 == 0))
                             {
                                command2 += temp.at(counter);
                             }
                             else if((temp.at(counter) == '#') && (counter2 == 0))
                             {
                                 if(command2.at(0) == 'e')
                                 {
                                     command2 += temp.at(counter);
                                 }
                                 else
                                 {
                                     counter2 = 1;
                                 }
                             }
                             else
                             {
                                counter2 = 1;
                             }
                         }
                        temp.clear();
                        temp = command2;
                        if(temp.size() > 0)
                        {
                              B.push_back(temp);   // store command
                              A.push_back(B);
                        }
                        temp.clear();
                        B.clear();
                 }
                if((i == command.size() - 1) && (temp.size() > 0))       // push back last command that has no connector
                {
                     string command3 = "";
              	     unsigned int counter3 = 0;
              	     for(unsigned int i = 0; i < temp.size(); i++)  // remove spaces at start
            	     {
            	         if(counter3 == 0)
            	         {
                             if(temp.at(i) != ' ')
                             {
            	                  command3 += temp.at(i);
            	                  counter3++;
                             }
         	             }
            	         else if(counter3 == 1)
            	         {
            	             command3 += temp.at(i);
            	         }
            	     }
            	     temp.clear();
                     temp = command3;
                     command3.clear();
                     string command2 = "";
                     unsigned int counter = 0;
                     unsigned int counter2 = 0;
                     for(counter = 0; counter < temp.size(); counter++)   // removes the '#' except for echo commands
                     {
                         if((temp.at(counter) != '#') && (counter2 == 0))
                         {
                            command2 += temp.at(counter);
                         }
                         else if((temp.at(counter) == '#') && (counter2 == 0))
                         {
                             if(command2.at(0) == 'e')
                             {
                                 command2 += temp.at(counter);
                             }
                             else
                             {
                                 counter2 = 1;
                             }
                         }
                         else
                         {
                            counter2 = 1;
                         }
                     }
                     temp.clear();
                     temp = command2;
                     if(temp.size() > 0)
                     {
                         B.push_back(temp);   // store command
                     }
                     temp.clear();
                }
            }
            
            //code to print out vector used for testing
            
            // for(unsigned int i = 0; i < A.size(); i++)
            // {
            //     cout << "Argument Row: " << i << endl;
            //     for(unsigned int j = 0; j < A.at(i).size(); j++)
            //     {
            //         cout << A.at(i).at(j) << endl;
            //     }
            // }
            
            unsigned int counter = 0;
            unsigned int counter2 = 0;
            string temp3 = "";
            string temp2 = "";
            for(unsigned int i = 0; i < command.size(); i++)   // get connectors for precedence and multi argument 
            {
                temp3 = command.at(i);
                if((command.at(i) == ';') && (counter == 0))
                {
                    D.push_back(temp3);
                    counter2++;
                }
                if(((command.at(i) == '&') || (command.at(i) == '|')) && (counter == 0))
                {
                    D.push_back(temp3);
                    i++;
                    counter2++;
                }
                if((command.at(i) == ')') && (counter == 0))
                {
                    C.push_back(D);
                    D.clear();
                    counter++;
                }
                else if((counter > 0) && (counter2 == 0))
                { 
                    if(command.at(i) == ';') 
                    {
                        temp2 += command.at(i);
                    }
                    else if((command.at(i) == '&') || (command.at(i) == '|'))
                    {
                       temp2 += command.at(i);
                       i++;
                    }
                    else if(command.at(i) == '(')
                    {
                        counter = 0;
                        E.push_back(temp2);
                        temp2.clear();
                    }
                }
                temp3.clear(); 
                counter2 = 0;
            }
            for(unsigned int i = 0; i < C.size(); i++)
            {
                if(C.at(i).size() == 0)
                {
                    C.at(i).push_back(";");
                }
            }
            
            //code to print out vector used for testing
            
            // for(unsigned int i = 0; i < C.size(); i++)
            // {
            //     cout << "Connector Row: " << i << endl;
            //     for(unsigned int j = 0; j < C.at(i).size(); j++)
            //     {
            //         cout << C.at(i).at(j) << endl;
            //     }
            // }
            
            
            
            
            // vec A has arguments to be run
            // vec C has the coressponding connectors for arguments in vec A
            // vec E has the connectors used for precedence.
            W = E;                             // swap the order of v and v3 so first inputs are at the back
            E.clear();
            for(int i = W.size() - 1; i > -1; i--)
            {
                if((W.at(i).at(0) == '|') || (W.at(i).at(0) == '&'))
                {
                    E.push_back(W.at(i));
                }
                else
                {
                    string a = ";";
                    E.push_back(a);
                }
            }   
            // cout << "Precedence row flipped backwards: " << endl;
            // for(unsigned int i = 0; i < E.size(); i++)
            // {
            //     cout << E.at(i) << endl;
            // }
            
            int passed = 0;
            unsigned int index = 0;
            string a = "";
            int checker = 1;
            while(index < A.size())
            {
                if(checker == 1)
                {
                     vector < vector < string > > T;  
                     vector < vector < string > > Y;  
                     T = A;
                     Y = C;
                     executecommand1(T,Y,passed,index);
                     if(E.size() > 0)
                     {
                         a = E.at(E.size() - 1);
                         E.pop_back();
                     }
                     if(a.at(0) == '&')
                     {
                         if(passed == 1)
                         {
                             checker = 1;
                         }
                         else
                         {
                             checker = 0;
                         }
                     }
                     else if(a.at(0) == '|')
                     {
                         if(passed == 1)
                         {
                             checker = 0;
                         }
                         else
                         {
                             checker = 1;
                         }
                     }
                }
                else if(checker == 0)
                {
                    checker = 1;
                    if(a.at(0) == '|')
                    {
                        if(E.size() > 0)
                        {
                            a = E.at(E.size() - 1);
                            E.pop_back();
                            if(a.at(0) == '|')
                            {
                              checker = 0;
                            }
                            if(a.at(0) == '&')
                            {
                                if(passed == 1)
                                {
                                    checker = 1;
                                }
                                else
                                {
                                    checker = 0;
                                }
                            }
                        }
                    }
                }
                index++;
            }
        }
        v.clear();
        v2.clear();  //clear vectors and strings for next inputs
        v3.clear();
        v4.clear();
        command.clear();
        getinput(command,check,loginname,hostname);  // get next input 
     }
    return 0;
}












