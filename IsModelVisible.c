
/* public: int __thiscall CModelInstance::IsModelVisible(float) */

int __thiscall CModelInstance::IsModelVisible(CModelInstance *this,float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x15ca30  2422  ?IsModelVisible@CModelInstance@@QAEHM@Z */
  iVar1 = FUN_36035f70((undefined4 *)(this + 4));
  iVar4 = 0;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_36163380(*(int *)(*(int *)(this + 8) + iVar3),param_1);
      if (-1 < iVar2) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < iVar1);
  }
  if ((*(int *)this != 0) && (iVar1 = FUN_361631f0(*(int *)this,param_1), -1 < iVar1)) {
    return 1;
  }
  return 0;
}

