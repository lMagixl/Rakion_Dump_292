
int * __thiscall FUN_3600dbc0(void *this,int *param_1)

{
  int *piVar1;
  CEntity *pCVar2;
  CEntity *this_00;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + 1;
  }
  this_00 = *(CEntity **)this;
  if (this_00 != (CEntity *)0x0) {
    pCVar2 = this_00 + 0x18;
    *(int *)pCVar2 = *(int *)pCVar2 + -1;
    if (*(int *)pCVar2 == 0) {
      CEntity::DeleteSelf(this_00);
    }
  }
  *(int *)this = *param_1;
  return this;
}

