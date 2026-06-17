
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall CSimpleProjection3D::IsViewerPlaneVisible(class Plane<float,3>
   const &)const  */

int __thiscall
CSimpleProjection3D::IsViewerPlaneVisible(CSimpleProjection3D *this,Plane<float,3> *param_1)

{
                    /* 0x5bf80  2502
                       ?IsViewerPlaneVisible@CSimpleProjection3D@@UBEHABV?$Plane@M$02@@@Z */
  if (_DAT_3622376c < *(float *)(param_1 + 8)) {
    return 1;
  }
  return 0;
}

