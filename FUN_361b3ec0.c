
void __fastcall FUN_361b3ec0(undefined4 *param_1)

{
  CEntity *pCVar1;
  CEntity *this;
  
  this = (CEntity *)*param_1;
  if (this != (CEntity *)0x0) {
    pCVar1 = this + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(this);
    }
  }
  *param_1 = 0;
  return;
}

