
/* public: virtual void __thiscall CSimpleProjection3D::PostClip(class Vector<float,3> const
   &,float,class Vector<float,3> &,float &)const  */

void __thiscall
CSimpleProjection3D::PostClip
          (CSimpleProjection3D *this,Vector<float,3> *param_1,float param_2,Vector<float,3> *param_3
          ,float *param_4)

{
                    /* 0x5be10  2786
                       ?PostClip@CSimpleProjection3D@@UBEXABV?$Vector@M$02@@MAAV2@AAM@Z */
  *(undefined4 *)param_3 = *(undefined4 *)param_1;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
  *param_4 = param_2;
  return;
}

