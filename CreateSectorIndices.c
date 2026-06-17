
/* public: void __thiscall CObject3D::CreateSectorIndices(void) */

void __thiscall CObject3D::CreateSectorIndices(CObject3D *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x49e30  1433  ?CreateSectorIndices@CObject3D@@QAEXXZ */
  iVar1 = FUN_3604a7d0((int)this);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_3604a790(this,iVar3);
      *(int *)(iVar2 + 0x68) = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

