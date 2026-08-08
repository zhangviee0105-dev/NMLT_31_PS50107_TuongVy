void checkTriangle(float a, float b, float c)
{
    int laTamgiacvuong;
    int laTamgiaccan;

    if (a > 0 && b > 0 && c > 0 && (a + b > c && a + c > b && b + c > a))
    {
        laTamgiacvuong =
            (a * a + b * b == c * c || (a * a + c * c == b * b) || (b * b + c * c == a * a));

        laTamgiaccan =
            (a == b || (a == c) || (b == c));

        if (a == a && b == c)
        {
            printf("Day la Tam giac deu. \n");
        }
        else if (laTamgiacvuong == 1 && laTamgiaccan == 1)
        {
            printf("Day la Tam giac vuong can. \n");
        }
        else if (laTamgiacvuong == 1)
        {
            printf ("Day la Tam giac vuong. \n");
        }
        else if (laTamgiaccan == 1)
        {
            printf ("Day la Tam giac can. \n");
        }
        
        {
            printf("Day la Tam giac thuong. \n");
        }
    }
    else
    {
        printf("Day khong phai la Tam giac. \n");
    }
}

