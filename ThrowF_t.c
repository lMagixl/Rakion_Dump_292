
/* void __cdecl ThrowF_t(char *,...) */

void __cdecl ThrowF_t(char *param_1,...)

{
  char *local_10c;
  char local_108 [260];
  undefined4 local_4;
  
                    /* 0x25db0  3824  ?ThrowF_t@@YAXPADZZ */
  local_4 = DAT_362abd90;
  _vsnprintf(local_108,0x100,param_1,&stack0x00000008);
  local_10c = local_108;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_10c,(ThrowInfo *)&DAT_3624f688);
}

