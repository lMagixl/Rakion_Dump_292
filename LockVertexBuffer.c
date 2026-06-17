
/* public: struct GFXVertex * __thiscall MeshLOD::LockVertexBuffer(long &) */

GFXVertex * __thiscall MeshLOD::LockVertexBuffer(MeshLOD *this,long *param_1)

{
  long lVar1;
  GFXVertex *pGVar2;
  
                    /* 0x154820  2570  ?LockVertexBuffer@MeshLOD@@QAEPAUGFXVertex@@AAJ@Z */
  lVar1 = FUN_36082920(*(int *)(this + 0x38));
  *param_1 = lVar1;
  pGVar2 = (GFXVertex *)(*DAT_362c46c8)(*(undefined4 *)(this + 0x3c),0,lVar1,0x65);
  return pGVar2;
}

