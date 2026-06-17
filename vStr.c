
/* public: char const * __cdecl TestLog::vStr(char *,...) */

char * __thiscall TestLog::vStr(TestLog *this,char *param_1,...)

{
  int iVar1;
  char *_Dest;
  char *pcVar2;
  char *in_stack_00000008;
  
                    /* 0x19f4d0  4436  ?vStr@TestLog@@QAAPBDPADZZ */
  _Dest = param_1 + 100;
  pcVar2 = _Dest;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  vsprintf(_Dest,in_stack_00000008,&stack0x0000000c);
  return _Dest;
}

