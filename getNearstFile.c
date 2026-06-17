
/* private: struct Xenesis::xFileManager::xFolder * __thiscall
   Xenesis::xFileManager::getNearstFile(unsigned __int64)const  */

xFolder * __thiscall Xenesis::xFileManager::getNearstFile(xFileManager *this,__uint64 param_1)

{
  __uint64 local_18;
  undefined4 local_10;
  undefined4 local_c;
  xFolder *local_8;
  
                    /* 0x1a5220  4201  ?getNearstFile@xFileManager@Xenesis@@ABEPAUxFolder@12@_K@Z */
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  local_8 = (xFolder *)0x0;
  local_18 = param_1;
  FUN_361a6ea0(this + 0x48,(int *)&local_18);
  return local_8;
}

