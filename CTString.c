
/* public: __cdecl CTString::CTString(long,char const *,...) */

long __thiscall CTString::CTString(CTString *this,long param_1,char *param_2,...)

{
  char *pcVar1;
  char *in_stack_0000000c;
  
                    /* 0x1090  254  ??0CTString@@QAA@JPBDZZ */
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)param_1 = pcVar1;
  VPrintF((CTString *)param_1,in_stack_0000000c,&stack0x00000010);
  return param_1;
}

