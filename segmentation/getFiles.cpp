#include <iostream>  
#include <io.h>  
#include <string>  
#include <vector>  
using namespace std;
  
void getFiles(const std::string & path, std::vector<std::string> & files)  
{ 
    //�ļ����  
    long hFile = 0;  
    //�ļ���Ϣ��_finddata_t��Ҫio.hͷ�ļ�  
    struct _finddata_t fileinfo;  
    std::string p;  
    if((hFile = _findfirst(p.assign(path).append("\\*").c_str(),&fileinfo)) != -1)  
    {  
        do  
        {  
            //�����Ŀ¼,����֮  
            //�������,�����б�  
            if((fileinfo.attrib & _A_SUBDIR))  
            {  
                if(strcmp(fileinfo.name,".") != 0 && strcmp(fileinfo.name,"..") != 0)  
                    getFiles(p.assign(path).append("\\").append(fileinfo.name), files);  
            }  
            else  
            {  
                files.push_back(p.assign(path).append("\\").append(fileinfo.name));  
            }  
        } while (_findnext(hFile, &fileinfo) == 0);  
        _findclose(hFile);  
    }  
} 