#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char* argv[]){
    struct stat s;

    if(argc< 2){
        std:: cout << "\nEnter filename: ";
        exit(0);
    }

    if(stat(argv[1], &s) < 0){
        std:: cout << "Error in obtaining stats";
    }
    else{
        std:: cout << "Owner UID: " << s.st_uid << std:: endl;
        std:: cout << "Group ID: " << s.st_gid<< std:: endl;
        std:: cout << "Access Permissions: " << s.st_mode << std:: endl;
        std:: cout << "Access Time: " << s.st_atime << std:: endl;
        std:: cout << "File Size: " << s.st_size << std:: endl;
        std:: cout << "File Size (in blocks): "<< s.st_blksize << std:: endl;
    }
return 0;
}