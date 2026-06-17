
/* public: __thiscall MeshSurface::~MeshSurface(void) */

void __thiscall MeshSurface::~MeshSurface(MeshSurface *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x155290  533  ??1MeshSurface@@QAE@XZ */
  puStack_8 = &LAB_36219c11;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  if (*(CShader **)(this + 0xc) != (CShader *)0x0) {
    ExceptionList = &local_c;
    CStock_CShader::Release(_pShaderStock,*(CShader **)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  if (*(int *)(this + 0x40) != 0) {
    operator_delete__(*(void **)(this + 0x44));
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x44) = 0;
  }
  if (*(int *)(this + 0x38) != 0) {
    operator_delete__(*(void **)(this + 0x3c));
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
  }
  FUN_3615af80((int *)(this + 0x10));
  ExceptionList = local_c;
  return;
}

