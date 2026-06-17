
void FUN_361565b0(void)

{
  void *pvVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  int local_4;
  
  FUN_36154860();
  local_4 = FUN_3615a280(in_EAX + 6);
  if (0 < local_4) {
    iVar2 = 0;
    do {
      iVar3 = in_EAX[7] + iVar2;
      if (*(int *)(in_EAX[7] + 0x40 + iVar2) != 0) {
        operator_delete__(*(void **)(iVar3 + 0x44));
        *(undefined4 *)(iVar3 + 0x40) = 0;
        *(undefined4 *)(iVar3 + 0x44) = 0;
      }
      if (*(CShader **)(iVar3 + 0xc) != (CShader *)0x0) {
        CStock_CShader::Release(_pShaderStock,*(CShader **)(iVar3 + 0xc));
      }
      iVar2 = iVar2 + 0x48;
      local_4 = local_4 + -1;
      *(undefined4 *)(iVar3 + 0xc) = 0;
    } while (local_4 != 0);
  }
  if (in_EAX[6] != 0) {
    pvVar1 = (void *)in_EAX[7];
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x48,*(int *)((int)pvVar1 + -4),MeshSurface::~MeshSurface);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    in_EAX[6] = 0;
    in_EAX[7] = 0;
  }
  local_4 = FUN_3615a240(in_EAX + 4);
  if (0 < local_4) {
    iVar2 = 0;
    do {
      iVar3 = in_EAX[5] + iVar2;
      if (*(int *)(in_EAX[5] + 8 + iVar2) != 0) {
        operator_delete__(*(void **)(iVar3 + 0xc));
        *(undefined4 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0;
      }
      iVar2 = iVar2 + 0x10;
      local_4 = local_4 + -1;
      *(undefined4 *)(iVar3 + 4) = 0xffffffff;
    } while (local_4 != 0);
  }
  if (in_EAX[4] != 0) {
    pvVar1 = (void *)in_EAX[5];
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),MeshUVMap::~MeshUVMap);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    in_EAX[4] = 0;
    in_EAX[5] = 0;
  }
  if (*in_EAX != 0) {
    operator_delete__((void *)in_EAX[1]);
    *in_EAX = 0;
    in_EAX[1] = 0;
  }
  if (in_EAX[2] != 0) {
    operator_delete__((void *)in_EAX[3]);
    in_EAX[2] = 0;
    in_EAX[3] = 0;
  }
  return;
}

