
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTFileName::RemoveApplicationPath_t(void) */

void __thiscall CTFileName::RemoveApplicationPath_t(CTFileName *this)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0x26200  3122  ?RemoveApplicationPath_t@CTFileName@@QAEXXZ */
  iVar1 = CTString::RemovePrefix((CTString *)this,(CTString *)&_fnmApplicationPath);
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)this;
    uVar4 = __fnmApplicationPath;
    pcVar2 = Translate(s_ETRSFile___s__has_got_wrong_path_36224188,4);
    ThrowF_t(pcVar2,uVar3,uVar4);
  }
  return;
}

