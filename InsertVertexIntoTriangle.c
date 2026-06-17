
/* public: void __thiscall CBrushSector::InsertVertexIntoTriangle(class CSelection<class
   CBrushPolygon,256> &,class Vector<float,3>) */

void __thiscall
CBrushSector::InsertVertexIntoTriangle
          (CBrushSector *this,CSelection<class_CBrushPolygon,256> *param_1,float param_3,
          float param_4,float param_5)

{
  int iVar1;
  Vector<double,3> *pVVar2;
  double local_18;
  double local_10;
  double local_8;
  
                    /* 0x1400b0  2345
                       ?InsertVertexIntoTriangle@CBrushSector@@QAEXAAV?$CSelection@VCBrushPolygon@@$0BAA@@@V?$Vector@M$02@@@Z
                        */
  iVar1 = FUN_360cb720((int)param_1);
  if (iVar1 == 1) {
    SubdivideTriangles(this,param_1);
    local_18 = (double)param_3;
    pVVar2 = (Vector<double,3> *)&local_18;
    local_10 = (double)param_4;
    local_8 = (double)param_5;
    iVar1 = FUN_360fac30((undefined4 *)this);
    CBrushVertex::SetAbsolutePosition
              ((CBrushVertex *)(*(int *)(this + 4) + -0x48 + iVar1 * 0x48),pVVar2);
  }
  return;
}

