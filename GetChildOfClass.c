
/* public: class CEntity * __thiscall CEntity::GetChildOfClass(char const *) */

CEntity * __thiscall CEntity::GetChildOfClass(CEntity *this,char *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x126780  1759  ?GetChildOfClass@CEntity@@QAEPAV1@PBD@Z */
  piVar1 = *(int **)(this + 0xc4);
  do {
    piVar3 = piVar1;
    piVar1 = (int *)*piVar3;
    if (piVar1 == (int *)0x0) {
      return (CEntity *)0x0;
    }
    iVar2 = IsOfClass((CEntity *)(piVar3 + -0x2f),param_1);
  } while (iVar2 == 0);
  return (CEntity *)(piVar3 + -0x2f);
}

