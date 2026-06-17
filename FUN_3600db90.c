
int * __thiscall FUN_3600db90(void *this,int param_1)

{
  CEntity *pCVar1;
  CEntity *this_00;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  this_00 = *(CEntity **)this;
  if (this_00 != (CEntity *)0x0) {
    pCVar1 = this_00 + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(this_00);
    }
  }
  *(int *)this = param_1;
  return this;
}

