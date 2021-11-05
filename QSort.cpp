
void myqs(int* a, int left, int right)
    {
        int il = left;
        int ir = right;
        int mid = a[(left + right) / 2];
        while(il <= ir)
            {
                while(a[il] < mid) il++;
                while(a[ir] > mid) ir--;
                if(il <= ir)
                    {
                        if (a[il]>a[ir]) swap(a[il], a[ir]);
                        il++;
                        ir--;
                    };
            };
        if (il < right) myqs(a,il,right);
        if (left < ir) myqs(a,left,ir);
    };
