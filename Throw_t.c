
/* public: void __cdecl CTStream::Throw_t(char *,...) */

void __thiscall CTStream::Throw_t(CTStream *this,char *param_1,...)

{
  undefined4 in_stack_00000008;
  char *local_208;
  char local_204 [256];
  char local_104 [256];
  undefined4 local_4;
  
                    /* 0x3dee0  3825  ?Throw_t@CTStream@@QAAXPADZZ */
  local_4 = DAT_362abd90;
  _snprintf(local_204,0x100,s__s___s__36226e58,in_stack_00000008,*(undefined4 *)(param_1 + 0x20));
  _vsnprintf(local_104,0x100,local_204,&stack0x0000000c);
  local_208 = local_104;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_208,(ThrowInfo *)&DAT_3624f688);
}

