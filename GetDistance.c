
/* public: virtual float __thiscall CSimpleProjection3D::GetDistance(class Vector<float,3> const
   &)const  */

float __thiscall
CSimpleProjection3D::GetDistance(CSimpleProjection3D *this,Vector<float,3> *param_1)

{
                    /* 0x5bec0  1843  ?GetDistance@CSimpleProjection3D@@UBEMABV?$Vector@M$02@@@Z */
  return *(float *)(this + 200) * *(float *)param_1 +
         *(float *)(this + 0xcc) * *(float *)(param_1 + 4) +
         *(float *)(this + 0xd0) * *(float *)(param_1 + 8) + *(float *)(this + 0x124);
}

