
/* public: void __thiscall CMesh::Unbind(void) */

void __thiscall CMesh::Unbind(CMesh *this)

{
  int iVar1;
  
                    /* 0x155080  3867  ?Unbind@CMesh@@QAEXXZ */
  iVar1 = FUN_3600c4f0((undefined4 *)(this + 0x14));
  if (0 < iVar1) {
    do {
      FUN_36154860();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

