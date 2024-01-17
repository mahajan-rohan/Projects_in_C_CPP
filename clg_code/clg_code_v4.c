#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0, n10 = 0, n11 = 0, n12 = 0, n13 = 0, n14 = 0, n15 = 0, n16 = 0, n17 = 0, n18 = 0, n19 = 0, n20 = 0, n21 = 0, n22 = 0, n23 = 0, n24 = 0, n25 = 0, n26 = 0, n27 = 0, n28 = 0, n29 = 0, n30 = 0, n31 = 0, n32 = 0, n33 = 0, n34 = 0, n35 = 0, n36 = 0, n37 = 0, n38 = 0, n39 = 0, n40 = 0, n41 = 0, n42 = 0, n43 = 0, n44 = 0, n45 = 0, n46 = 0, n47 = 0, n48 = 0, n49 = 0, n50 = 0, n51 = 0, n52 = 0, n53 = 0, n54 = 0, n55 = 0, n56 = 0, n57 = 0, n58 = 0, n59 = 0, n60 = 0, n61 = 0, n62 = 0, n63 = 0, n64 = 0, n65 = 0, n66 = 0, n67 = 0, n68 = 0, n69 = 0, n70 = 0, n71 = 0, n72 = 0, n73 = 0, n74 = 0, n75 = 0, n76 = 0, n77 = 0, n78 = 0, n79 = 0, n80 = 0, n81 = 0, n82 = 0, n83 = 0, n84 = 0, n85 = 0, n86 = 0, n87 = 0, n88 = 0, n89 = 0, n90 = 0, n91 = 0, n92 = 0, n93 = 0, n94 = 0, n95 = 0, n96 = 0, n97 = 0, n98 = 0, n99 = 0, n100 = 0, n101 = 0, n102 = 0, n103 = 0, n104 = 0, n105 = 0, n106 = 0, n107 = 0, n108 = 0, n109 = 0, n110 = 0, n111 = 0, n112 = 0, n113 = 0, n114 = 0, n115 = 0, n116 = 0, n117 = 0, n118 = 0, n119 = 0, n120 = 0, n121 = 0, n122 = 0, n123 = 0, n124 = 0, n125 = 0, n126 = 0, n127 = 0, n128 = 0, n129 = 0, n130 = 0, n131 = 0, n132 = 0, n133 = 0, n134 = 0, n135 = 0, n136 = 0;

    printf("\n\t ================================================================");
    printf("\n\t PROGRAM FOR MHT-CET CAP ROUND CUTOFF 2022-23 AND FEE STRUCTURE");
    printf("\n\t ================================================================\n\t");
    printf("\n\t 1.SHIVAJI UNIVERSITY (SUK)\n\t 2.SAVITRIBAI PHULE PUNE UNIVERSITY (SPPU)\n\t 3.MUMBAI UNIVERSITY\n\t 4.BABASAHEB AMBEDKAR TECHNOLOGICAL UNIVERSITY (BATU)\n\t");
    printf("\n\t ================================================================\n\t");

    do
    {
        if (n1 > 4)
        {
            printf("\n\t WRONG INPUT...!!!");
        }
        printf("\n\t ENTER CHOICE FOR UNIVERSITY : ");
        scanf("%d", &n1);
    } while (n1 > 4);

    switch (n1)
    {
    case 1:
        printf("\n\t =================================");
        printf("\n\t LIST OF COLLEGES UNDER SHIVAJI UNIVERSITY (SUK)\n\t");
        printf("\n\t 1.SANT GAJANAN MAHARAJ COLLEGE OF ENGINEERING\n\t 2.KIT'S COLLEGE OF ENGINEERING\n\t 3.DY PATIL COLLEGE OF ENGINEERING AND TECHNOLOGY\n\t 4.BHARATI VIDYAPEETH COLLEGE OF ENGINEERING\n\t 5.DKTE S0CIETY'S AND ENGINEERING INSTITUTE");
        printf("\n\t =================================\n\t");
        do
        {
            if (n2 > 5)
            {
                printf("\n\t WRONG INPUT...!!!");
            }
            printf("\n\t ENTER CHOICE FOR COLLEGES : ");
            scanf("%d", &n2);
        } while (n2 > 5);

        switch (n2)
        {
        case 1:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN SANT GAJANAN MAHARAJ COLLEGE OF ENGINEERING\n\t");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.MECHANICAL ENGINEERING\n\t 4.ELECTRICAL ENGINEERING\n\t 5.CIVIL ENGINEERING\n\t");
            printf("\n\t =================================\n\t");

            do
            {
                if (n3 > 5)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n3);
            } while (n3 > 5);

            switch (n3)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING BRANCH");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n26 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n26);
                } while (n26 > 2);

                switch (n26)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 74.5106403");
                    printf("\n\t CAP ROUND 2 : 70.9370842");
                    printf("\n\t CAP ROUND 3 : 81.6296507");
                    break;

                case 2:
                    printf("\n\t FEE : 65,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING BRANCH");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n27 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n27);
                } while (n27 > 2);

                switch (n27)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 59.4192464");
                    printf("\n\t CAP ROUND 2 : 58.8006082");
                    printf("\n\t CAP ROUND 3 : 67.2875491");
                    break;

                case 2:
                    printf("\n\t FEE : 60,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING BRANCH");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n28 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n28);
                } while (n28 > 2);

                switch (n28)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 18.8401670");
                    printf("\n\t CAP ROUND 2 : 1.9189866");
                    printf("\n\t CAP ROUND 3 : 18.8401670");
                    break;

                case 2:
                    printf("\n\t FEE : 60,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRICAL ENGINEERING BRANCH");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n29 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n29);
                } while (n29 > 2);

                switch (n29)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 49.4442605");
                    printf("\n\t CAP ROUND 2 : 38.5667023");
                    printf("\n\t CAP ROUND 3 : 48.1419882");
                    break;

                case 2:
                    printf("\n\t FEE : 60,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING BRANCH");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n30 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n30);
                } while (n30 > 2);

                switch (n30)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 7.4616793");
                    printf("\n\t CAP ROUND 2 : 4.3340532");
                    printf("\n\t CAP ROUND 3 : 8.7583305");
                    break;

                case 2:
                    printf("\n\t FEE : 60,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 2:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN KIT'S COLLEGE OF ENGINEERING\n\t");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.MECHANICAL ENGINEERING\n\t 4.ELECTRICAL ENGINEERING\n\t 5.CIVIL ENGINEERING\n\t 6.CIVIL AND ENVIRONMENTAL ENGINEERING\n\t 7.BIOTECHNOLOGY ENGINEERING");
            printf("\n\t =================================\n\t");
            do
            {
                if (n4 > 7)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n4);
            } while (n4 > 7);

            switch (n4)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING BRANCH");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n31 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n31);
                } while (n31 > 2);

                switch (n31)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 93.7141189");
                    printf("\n\t CAP ROUND 2 : 94.0029697");
                    printf("\n\t CAP ROUND 3 : 93.8349561");
                    break;

                case 2:
                    printf("\n\t FEE : 90,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n32 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n32);
                } while (n32 > 2);

                switch (n32)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 86.5233044");
                    printf("\n\t CAP ROUND 2 : 84.8685155");
                    printf("\n\t CAP ROUND 3 : 85.5965895");
                    break;

                case 2:
                    printf("\n\t FEE : 90,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n33 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n33);
                } while (n33 > 2);

                switch (n33)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 59.0639291");
                    printf("\n\t CAP ROUND 2 : 58.8113371");
                    printf("\n\t CAP ROUND 3 : 77.6049916");
                    break;

                case 2:
                    printf("\n\t FEE : 90,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n34 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n34);
                } while (n34 > 2);

                switch (n34)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 74.3640850");
                    printf("\n\t CAP ROUND 2 : 74.2260244");
                    printf("\n\t CAP ROUND 3 : 81.5143923");
                    break;

                case 2:
                    printf("\n\t FEE : 90,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n35 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n35);
                } while (n35 > 2);

                switch (n35)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 54.9125550");
                    printf("\n\t CAP ROUND 2 : 54.9125550");
                    printf("\n\t CAP ROUND 3 : 43.3167495");
                    break;

                case 2:
                    printf("\n\t FEE : 90,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 6:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL AND ENVIRONMENTAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n36 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n36);
                } while (n36 > 2);

                switch (n36)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 45.2718114");
                    printf("\n\t CAP ROUND 2 : 25.7906003");
                    printf("\n\t CAP ROUND 3 : 10.5662165");
                    break;

                case 2:
                    printf("\n\t FEE : 90,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 7:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN BIOTECHNOLOGY ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n37 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n37);
                } while (n37 > 2);

                switch (n37)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 75.6487214");
                    printf("\n\t CAP ROUND 2 : 64.4979119");
                    printf("\n\t CAP ROUND 3 : 79.2815054");
                    break;

                case 2:
                    printf("\n\t FEE : 90,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 3:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN DY PATIL COLLEGE OF ENGINEERING AND TECHNOLOGY\n\t");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.MECHANICAL ENGINEERING\n\t 4.COMPUTER SCIENECE AND ENGINEERING(DATA SCIENCE)\n\t 5.CIVIL ENGINEERING\n\t 6.CHEMICAL ENGINEERING\n\t");
            printf("\n\t =================================\n\t");
            do
            {
                if (n5 > 6)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n5);
            } while (n5 > 6);

            switch (n5)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n38 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n38);
                } while (n38 > 2);

                switch (n38)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 88.8543387");
                    printf("\n\t CAP ROUND 2 : 88.2419713");
                    printf("\n\t CAP ROUND 3 : 91.8375279");
                    break;

                case 2:
                    printf("\n\t FEE : 114,085 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n38 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n38);
                } while (n38 > 2);

                switch (n38)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 80.5501725");
                    printf("\n\t CAP ROUND 2 : 81.0304563");
                    printf("\n\t CAP ROUND 3 : 80.4540499");
                    break;

                case 2:
                    printf("\n\t FEE : 114,085 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n39 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n39);
                } while (n39 > 2);

                switch (n39)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 47.8470482");
                    printf("\n\t CAP ROUND 2 : 41.1873138");
                    printf("\n\t CAP ROUND 3 : 64.0172786");
                    break;

                case 2:
                    printf("\n\t FEE : 114,085 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENECE AND ENGINEERING(DATA SCIENCE) ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n40 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n40);
                } while (n40 > 2);

                switch (n40)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 83.3246679");
                    printf("\n\t CAP ROUND 2 : 84.1495823");
                    printf("\n\t CAP ROUND 3 : 90.5279576");
                    break;

                case 2:
                    printf("\n\t FEE : 114,085 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n41 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n41);
                } while (n41 > 2);

                switch (n41)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 26.9007793");
                    printf("\n\t CAP ROUND 2 : 2.5896414");
                    printf("\n\t CAP ROUND 3 : 48.2601391");
                    break;

                case 2:
                    printf("\n\t FEE : 114,085 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 6:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CHEMICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n42 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n42);
                } while (n42 > 2);

                switch (n42)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 45.2718114");
                    printf("\n\t CAP ROUND 2 : 25.7906003");
                    printf("\n\t CAP ROUND 3 : 32.5908894");
                    break;

                case 2:
                    printf("\n\t FEE : 114,085 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 4:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN BHARATI VIDYAPEETH COLLEGE OF ENGINEERING\n\t ");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.MECHANICAL ENGINEERING\n\t 4.COMPUTER SCIENCE AND ENGINEERING (AI & ML)\n\t 5.CIVIL ENGINEERING\n\t");
            printf("\n\t =================================\n\t");

            do
            {
                if (n6 > 5)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n6);
            } while (n6 > 5);

            switch (n6)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n43 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n43);
                } while (n43 > 2);

                switch (n43)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 83.2493822");
                    printf("\n\t CAP ROUND 2 : 79.5912465");
                    printf("\n\t CAP ROUND 3 : 83.2493822");
                    break;

                case 2:
                    printf("\n\t FEE : 82,301 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n44 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n44);
                } while (n44 > 2);

                switch (n44)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 69.1685966");
                    printf("\n\t CAP ROUND 2 : 64.7353734");
                    printf("\n\t CAP ROUND 3 : 69.0394836");
                    break;

                case 2:
                    printf("\n\t FEE : 82,301 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n45 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n45);
                } while (n45 > 2);

                switch (n45)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 17.5316365");
                    printf("\n\t CAP ROUND 2 : 18.3757840");
                    printf("\n\t CAP ROUND 3 : 21.2317049");
                    break;

                case 2:
                    printf("\n\t FEE : 82,301 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE AND ENGINEERING (AI & ML)");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n46 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n46);
                } while (n46 > 2);

                switch (n46)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 76.2706983");
                    printf("\n\t CAP ROUND 2 : 73.4437245");
                    printf("\n\t CAP ROUND 3 : 81.9995261");
                    break;

                case 2:
                    printf("\n\t FEE : 82,301 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n47 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n47);
                } while (n47 > 2);

                switch (n47)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 18.3037194");
                    printf("\n\t CAP ROUND 2 : 21.2317049");
                    printf("\n\t CAP ROUND 3 : 12.9353233");
                    break;

                case 2:
                    printf("\n\t FEE : 82,301 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 5:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN DKTE S0CIETY'S AND ENGINEERING INSTITUTE\n\t ");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.MECHANICAL ENGINEERING\n\t 4.ELECTRICAL ENGINEERING\n\t 5.CIVIL ENGINEERING\n\t 6.ARTIFICIAL INTELLIGENCE (AI) & DATA SCIENCE ENGINEERING\n\t 7.FASHION TECHNOLOGY");
            printf("\n\t =================================\n\t");

            do
            {
                if (n7 > 7)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n7);
            } while (n7 > 7);

            switch (n7)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n48 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n48);
                } while (n48 > 2);

                switch (n48)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 91.3351936");
                    printf("\n\t CAP ROUND 2 : 91.3351936");
                    printf("\n\t CAP ROUND 3 : 92.2302228");
                    break;

                case 2:
                    printf("\n\t FEE : 106,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n49 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n49);
                } while (n49 > 2);

                switch (n49)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 79.5947693");
                    printf("\n\t CAP ROUND 2 : 79.5386869");
                    printf("\n\t CAP ROUND 3 : 79.5309168");
                    break;

                case 2:
                    printf("\n\t FEE : 106,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n50 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n50);
                } while (n50 > 2);

                switch (n50)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 50.8162490");
                    printf("\n\t CAP ROUND 2 : 26.3140433");
                    printf("\n\t CAP ROUND 3 : 51.2600953");
                    break;

                case 2:
                    printf("\n\t FEE : 106,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n51 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n51);
                } while (n51 > 2);

                switch (n51)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 65.2657662");
                    printf("\n\t CAP ROUND 2 : 64.4979119");
                    printf("\n\t CAP ROUND 3 : 77.0895594");
                    break;

                case 2:
                    printf("\n\t FEE : 106,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n52 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n52);
                } while (n52 > 2);

                switch (n52)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 17.5093411");
                    printf("\n\t CAP ROUND 2 : 51.9313711");
                    printf("\n\t CAP ROUND 3 : 14.6195704");
                    break;

                case 2:
                    printf("\n\t FEE : 106,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 6:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ARTIFICIAL INTELLIGENCE (AI) & DATA SCIENCE ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n53 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n53);
                } while (n53 > 2);

                switch (n53)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 85.0225065");
                    printf("\n\t CAP ROUND 2 : 84.2697705");
                    printf("\n\t CAP ROUND 3 : 95.8804332");
                    break;

                case 2:
                    printf("\n\t FEE : 106,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 7:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN FASHION TECHNOLOGY ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n54 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n54);
                } while (n54 > 2);

                switch (n54)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 57.2112851");
                    printf("\n\t CAP ROUND 2 : 39.5925136");
                    printf("\n\t CAP ROUND 3 : 36.7166438");
                    break;

                case 2:
                    printf("\n\t FEE : 106,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        default:
            break;
        }
        break;

    case 2:
        printf("\n\t =================================");
        printf("\n\t LIST OF COLLEGES UNDER SAVITRIBAI PHULE PUNE UNIVERSITY (SPPU)\n\t");
        printf("\n\t 1.COLLEGE OF ENGINEERING PUNE (COEP)\n\t 2.VISHWAKARMA INSTITUTE OF TECHNOLOGY (VIT)\n\t 3.DY PATIL COLLEGE OF ENGINEERING AND TECHNOLOGY\n\t 4.VISHWAKARMA INSTITUTE OF INFORMATION TECHNOLOGY (VIIT)\n\t 5.PIMPRI CHINCHWAD COLLEGE OF ENGINEERING (PCCOE)");
        printf("\n\t =================================\n\t");

        do
        {
            if (n8 > 5)
            {
                printf("\n\t WRONG INPUT...!!!");
            }
            printf("\n\t ENTER CHOICE FOR COLLEGE : ");
            scanf("%d", &n8);
        } while (n8 > 5);

        switch (n8)
        {
        case 1:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN COLLEGE OF ENGINEERING PUNE (COEP)\n\t");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.MECHANICAL ENGINEERING\n\t 4.ELECTRICAL ENGINEERING\n\t 5.CIVIL ENGINEERING\n\t 6.MANUFACTURING SCIENCE & ENGINEERING\n\t 7.METALLURGY AND MATERIAL ENGINEERING");
            printf("\n\t =================================\n\t");

            do
            {
                if (n9 > 7)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n9);
            } while (n9 > 7);

            switch (n9)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n55 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n55);
                } while (n55 > 2);

                switch (n55)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 99.9145785");
                    printf("\n\t CAP ROUND 2 : 99.8216523");
                    printf("\n\t CAP ROUND 3 : 99.7722095");
                    break;

                case 2:
                    printf("\n\t FEE : 40,500 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n56 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n56);
                } while (n56 > 2);

                switch (n56)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 99.7062307");
                    printf("\n\t CAP ROUND 2 : 99.6208351");
                    printf("\n\t CAP ROUND 3 : 99.5010454");
                    break;

                case 2:
                    printf("\n\t FEE : 40,500 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n57 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n57);
                } while (n57 > 2);

                switch (n57)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 98.8504095");
                    printf("\n\t CAP ROUND 2 : 98.6417086");
                    printf("\n\t CAP ROUND 3 : 98.7203184");
                    break;

                case 2:
                    printf("\n\t FEE : 40,500 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n58 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n58);
                } while (n58 > 2);

                switch (n58)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 99.2817892");
                    printf("\n\t CAP ROUND 2 : 99.1979878");
                    printf("\n\t CAP ROUND 3 : 99.1888648");
                    break;

                case 2:
                    printf("\n\t FEE : 40,500 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n59 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n59);
                } while (n59 > 2);

                switch (n59)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 98.0804777");
                    printf("\n\t CAP ROUND 2 : 97.8692103");
                    printf("\n\t CAP ROUND 3 : 98.1731418");
                    break;

                case 2:
                    printf("\n\t FEE : 40,500 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 6:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MANUFACTURING SCIENCE & ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n60 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n60);
                } while (n60 > 2);

                switch (n60)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 97.6728754");
                    printf("\n\t CAP ROUND 2 : 97.1490280");
                    printf("\n\t CAP ROUND 3 : 97.7695520");
                    break;

                case 2:
                    printf("\n\t FEE : 40,500 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 7:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN METALLURGY AND MATERIAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n61 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n61);
                } while (n61 > 2);

                switch (n61)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 96.6135363");
                    printf("\n\t CAP ROUND 2 : 95.3393686");
                    printf("\n\t CAP ROUND 3 : 94.9790794");
                    break;

                case 2:
                    printf("\n\t FEE : 40,500 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 2:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN VISHWAKARMA INSTITUTE OF TECHNOLOGY (VIT)\n\t");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.MECHANICAL ENGINEERING\n\t 4.INFORMATION TECHNOLOGY ENGINEERING\n\t 5.INSTRUMENTATION & CONTROL ENGINEERING");
            printf("\n\t =================================\n\t");

            do
            {
                if (n10 > 5)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n10);
            } while (n10 > 5);

            switch (n10)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n62 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n62);
                } while (n62 > 2);

                switch (n62)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 99.0216004");
                    printf("\n\t CAP ROUND 2 : 98.9193800");
                    printf("\n\t CAP ROUND 3 : 98.8151097");
                    break;

                case 2:
                    printf("\n\t FEE : 184,349 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n63 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n63);
                } while (n63 > 2);

                switch (n63)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 97.2111553");
                    printf("\n\t CAP ROUND 2 : 97.0259327");
                    printf("\n\t CAP ROUND 3 : 96.8671501");
                    break;

                case 2:
                    printf("\n\t FEE : 184,349 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n64 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n64);
                } while (n64 > 2);

                switch (n64)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 92.5464629");
                    printf("\n\t CAP ROUND 2 : 91.8979281");
                    printf("\n\t CAP ROUND 3 : 93.3189344");
                    break;

                case 2:
                    printf("\n\t FEE : 184,349 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN INFORMATION TECHNOLOGY ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n65 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n65);
                } while (n65 > 2);

                switch (n65)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 98.6851440");
                    printf("\n\t CAP ROUND 2 : 98.5643212");
                    printf("\n\t CAP ROUND 3 : 98.5294822");
                    break;

                case 2:
                    printf("\n\t FEE : 184,349 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN INSTRUMENTATION & CONTROL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n66 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n66);
                } while (n66 > 2);

                switch (n66)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 89.0594645");
                    printf("\n\t CAP ROUND 2 : 90.8966299");
                    printf("\n\t CAP ROUND 3 : 90.2973471");
                    break;

                case 2:
                    printf("\n\t FEE : 184,349 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 3:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN DY PATIL COLLEGE OF ENGINEERING AND TECHNOLOGY,PIMPRI\n\t");
            printf("\n\t 1.COMPUTER ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.MECHANICAL ENGINEERING\n\t 4.ELECTRICAL ENGINEERING\n\t 5.CIVIL ENGINEERING\n\t 6.INFORMATION TECHNOLOGY ENGINEERING\n\t 7.INSTRUMENTATION ENGINEERING\n\t 8.AUTOMATION & ROBOTICS ENGINEERING");
            printf("\n\t =================================\n\t");

            do
            {
                if (n11 > 8)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n11);
            } while (n11 > 8);

            switch (n11)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n67 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n67);
                } while (n67 > 2);

                switch (n67)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 94.5135505");
                    printf("\n\t CAP ROUND 2 : 94.2809760");
                    printf("\n\t CAP ROUND 3 : 94.7358445");
                    break;

                case 2:
                    printf("\n\t FEE : 117,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n68 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n68);
                } while (n68 > 2);

                switch (n68)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 87.0274997");
                    printf("\n\t CAP ROUND 2 : 87.6060476");
                    printf("\n\t CAP ROUND 3 : 80.3744535");
                    break;

                case 2:
                    printf("\n\t FEE : 117,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n69 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n69);
                } while (n69 > 2);

                switch (n69)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 48.1419882");
                    printf("\n\t CAP ROUND 2 : 51.2600953");
                    printf("\n\t CAP ROUND 3 : 74.5211181");
                    break;

                case 2:
                    printf("\n\t FEE : 117,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n70 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n70);
                } while (n70 > 2);

                switch (n70)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 67.9791157");
                    printf("\n\t CAP ROUND 2 : 71.6451268");
                    printf("\n\t CAP ROUND 3 : 72.5765063");
                    break;

                case 2:
                    printf("\n\t FEE : 117,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n71 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n71);
                } while (n71 > 2);

                switch (n71)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 1.4547046");
                    printf("\n\t CAP ROUND 2 : 26.9007793");
                    printf("\n\t CAP ROUND 3 : 31.5015186");
                    break;

                case 2:
                    printf("\n\t FEE : 117,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 6:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN INFORMATION TECHNOLOGY ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n72 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n72);
                } while (n72 > 2);

                switch (n72)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 94.0029697");
                    printf("\n\t CAP ROUND 2 : 93.6527455");
                    printf("\n\t CAP ROUND 3 : 94.4989339");
                    break;

                case 2:
                    printf("\n\t FEE : 117,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 7:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN INSTRUMENTATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n73 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n73);
                } while (n73 > 2);

                switch (n73)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 63.7147595");
                    printf("\n\t CAP ROUND 2 : 65.5958943");
                    printf("\n\t CAP ROUND 3 : 45.2718114");
                    break;

                case 2:
                    printf("\n\t FEE : 117,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 8:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN AUTOMATION & ROBOTICS ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n74 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n74);
                } while (n74 > 2);

                switch (n74)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 71.6451268");
                    printf("\n\t CAP ROUND 2 : 74.2012741");
                    printf("\n\t CAP ROUND 3 : 79.5309168");
                    break;

                case 2:
                    printf("\n\t FEE : 117,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 4:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN VISHWAKARMA INSTITUTE OF INFORMATION TECHNOLOGY (VIIT)\n\t ");
            printf("\n\t 1.COMPUTER ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.MECHANICAL ENGINEERING\n\t 4.INFORMATION TECHNOLOGY ENGINEERING\n\t 5.CIVIL ENGINEERING\n\t 6.COMPUTER SCIENCE & ENGINEERING (ARTIFICIAL INTELLIGENCE)\n\t");
            printf("\n\t =================================\n\t");

            do
            {
                if (n12 > 6)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n12);
            } while (n12 > 6);

            switch (n12)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n75 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n75);
                } while (n75 > 2);

                switch (n75)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 97.9836750");
                    printf("\n\t CAP ROUND 2 : 97.8101499");
                    printf("\n\t CAP ROUND 3 : 97.7392044");
                    break;

                case 2:
                    printf("\n\t FEE : 164,894 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n76 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n76);
                } while (n76 > 2);

                switch (n76)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 95.0850751");
                    printf("\n\t CAP ROUND 2 : 94.6506656");
                    printf("\n\t CAP ROUND 3 : 94.4723858");
                    break;

                case 2:
                    printf("\n\t FEE : 164,894 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n77 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n77);
                } while (n77 > 2);

                switch (n77)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 87.2542051");
                    printf("\n\t CAP ROUND 2 : 84.2332613");
                    printf("\n\t CAP ROUND 3 : 84.8614274");
                    break;

                case 2:
                    printf("\n\t FEE : 164,894 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN INFORMATION TECHNOLOGY ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n78 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n78);
                } while (n78 > 2);

                switch (n78)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 97.5140106");
                    printf("\n\t CAP ROUND 2 : 97.2111553");
                    printf("\n\t CAP ROUND 3 : 97.1847006");
                    break;

                case 2:
                    printf("\n\t FEE : 164,894 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n79 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n79);
                } while (n79 > 2);

                switch (n79)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 80.6330675");
                    printf("\n\t CAP ROUND 2 : 79.2815054");
                    printf("\n\t CAP ROUND 3 : 83.4045178");
                    break;

                case 2:
                    printf("\n\t FEE : 164,894 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 6:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING (ARTIFICIAL INTELLIGENCE)");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n80 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n80);
                } while (n80 > 2);

                switch (n80)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 96.7746580");
                    printf("\n\t CAP ROUND 2 : 96.7741935");
                    printf("\n\t CAP ROUND 3 : 96.8159203");
                    break;

                case 2:
                    printf("\n\t FEE : 164,894 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 5:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN PIMPRI CHINCHWAD COLLEGE OF ENGINEERING (PCCOE)\n\t ");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.CIVIL ENGINEERING\n\t 4.COMPUTER ENGINEERING (REGIONAL LANGUAGE)\n\t 5.INFORMATION TECHNOLOGY ENGINEERING\n\t 6.COMPUTER SCIENCE & ENGINEERING (ARTIFICIAL INTELLIGENCE & MACHINE LEARNING)");
            printf("\n\t =================================\n\t");

            do
            {
                if (n13 > 6)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n13);
            } while (n13 > 6);

            switch (n13)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n81 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n81);
                } while (n81 > 2);

                switch (n81)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 98.5491179");
                    printf("\n\t CAP ROUND 2 : 98.3996915");
                    printf("\n\t CAP ROUND 3 : 98.3555512");
                    break;

                case 2:
                    printf("\n\t FEE : 106,489 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n82 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n82);
                } while (n82 > 2);

                switch (n82)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 96.3074531");
                    printf("\n\t CAP ROUND 2 : 95.9333398");
                    printf("\n\t CAP ROUND 3 : 95.8804332");
                    break;

                case 2:
                    printf("\n\t FEE : 106,489 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n83 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n83);
                } while (n83 > 2);

                switch (n83)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 88.0249580");
                    printf("\n\t CAP ROUND 2 : 86.3666603");
                    printf("\n\t CAP ROUND 3 : 88.9568225");
                    break;

                case 2:
                    printf("\n\t FEE : 106,489 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER ENGINEERING (REGIONAL LANGUAGE)");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n84 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n84);
                } while (n84 > 2);

                switch (n84)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 96.1146647");
                    printf("\n\t CAP ROUND 2 : 95.7632883");
                    printf("\n\t CAP ROUND 3 : 92.8130723");
                    break;

                case 2:
                    printf("\n\t FEE : 106,489 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN INFORMATION TECHNOLOGY ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n85 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n85);
                } while (n85 > 2);

                switch (n85)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 96.1146647");
                    printf("\n\t CAP ROUND 2 : 95.7632883");
                    printf("\n\t CAP ROUND 3 : 92.8130723");
                    break;

                case 2:
                    printf("\n\t FEE : 106,489 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 6:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING (ARTIFICIAL INTELLIGENCE & MACHINE LEARNING)");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n86 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n86);
                } while (n86 > 2);

                switch (n86)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 96.1146647");
                    printf("\n\t CAP ROUND 2 : 95.7632883");
                    printf("\n\t CAP ROUND 3 : 92.8130723");
                    break;

                case 2:
                    printf("\n\t FEE : 106,489 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        default:
            break;
        }
        break;

    case 3:
        printf("\n\t =================================");
        printf("\n\t LIST OF COLLEGES UNDER MUMBAI UNIVERSITY \n\t");
        printf("\n\t 1.VEERMATA JIJABAI TECHNOLOGICAL INSTITUTE (VJTI)\n\t 2.ST. FRANCIS INSTITUTE OF TECHNOLOGY (SFIT)\n\t 3.SARDAR PATEL INSTITUTE OF TECHNOLOGY (SPIT)\n\t 4.VIVEKANAND EDUCATION SOCIETY'S INSTITUTE OF TECHNOLOGY (VESIT)\n\t 5.DON BOSCO INSTITUTE OF TECHNOLOGY (DBIT)");
        printf("\n\t =================================\n\t");

        do
        {
            if (n14 > 5)
            {
                printf("\n\t WRONG INPUT...!!!");
            }
            printf("\n\t ENTER CHOICE FOR COLLEGE : ");
            scanf("%d", &n14);
        } while (n14 > 5);

        switch (n14)
        {
        case 1:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN VEERMATA JIJABAI TECHNOLOGICAL INSTITUTE (VJTI)\n\t");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.MECHANICAL ENGINEERING\n\t 4.ELECTRICAL ENGINEERING\n\t 5.CIVIL ENGINEERING");
            printf("\n\t =================================\n\t");

            do
            {
                if (n15 > 5)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n15);
            } while (n15 > 5);

            switch (n15)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n114 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n114);
                } while (n114 > 2);

                switch (n114)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 99.9099739");
                    printf("\n\t CAP ROUND 2 : 99.8540430");
                    printf("\n\t CAP ROUND 3 : 99.8176145");
                    break;

                case 2:
                    printf("\n\t FEE : 68,161 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n115 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n115);
                } while (n115 > 2);

                switch (n115)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 99.6404625");
                    printf("\n\t CAP ROUND 2 : 99.3537350");
                    printf("\n\t CAP ROUND 3 : 99.3440870");
                    break;

                case 2:
                    printf("\n\t FEE : 68,161 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n116 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n116);
                } while (n116 > 2);

                switch (n116)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 98.7664986");
                    printf("\n\t CAP ROUND 2 : 98.4624227");
                    printf("\n\t CAP ROUND 3 : 98.3418490");
                    break;

                case 2:
                    printf("\n\t FEE : 68,161 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n117 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n117);
                } while (n117 > 2);

                switch (n117)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 99.0658752");
                    printf("\n\t CAP ROUND 2 : 98.5432530");
                    printf("\n\t CAP ROUND 3 : 99.2843262");
                    break;

                case 2:
                    printf("\n\t FEE : 68,161 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n118 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n118);
                } while (n118 > 2);

                switch (n118)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 96.9302413");
                    printf("\n\t CAP ROUND 2 : 96.8159203");
                    printf("\n\t CAP ROUND 3 : 97.2106063");
                    break;

                case 2:
                    printf("\n\t FEE : 68,161 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 2:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN ST. FRANCIS INSTITUTE OF TECHNOLOGY (SFIT)\n\t");
            printf("\n\t 1.COMPUTER ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.MECHANICAL ENGINEERING\n\t 4.INFORMATION TECHNOLOGY ENGINEERING\n\t 5.ELETRICAL ENGINEERING\n\t");
            printf("\n\t =================================\n\t");

            do
            {
                if (n16 > 5)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n16);
            } while (n16 > 5);

            switch (n16)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n119 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n119);
                } while (n119 > 2);

                switch (n119)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 95.2545256");
                    printf("\n\t CAP ROUND 2 : 94.6591943");
                    printf("\n\t CAP ROUND 3 : 94.4333712");
                    break;

                case 2:
                    printf("\n\t FEE : 130,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n120 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n120);
                } while (n120 > 2);

                switch (n120)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 84.6811929");
                    printf("\n\t CAP ROUND 2 : 83.3246679");
                    printf("\n\t CAP ROUND 3 : 84.8888044");
                    break;

                case 2:
                    printf("\n\t FEE : 130,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n121 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n121);
                } while (n121 > 2);

                switch (n121)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 72.6414198");
                    printf("\n\t CAP ROUND 2 : 51.2359011");
                    printf("\n\t CAP ROUND 3 : 83.6868736");
                    break;

                case 2:
                    printf("\n\t FEE : 130,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN INFORMATION TECHNOLOGY ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n122 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n122);
                } while (n122 > 2);

                switch (n122)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 94.2383135");
                    printf("\n\t CAP ROUND 2 : 93.1647267");
                    printf("\n\t CAP ROUND 3 : 93.3189344");
                    break;

                case 2:
                    printf("\n\t FEE : 130,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELETRICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n123 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n123);
                } while (n123 > 2);

                switch (n123)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 76.5571858");
                    printf("\n\t CAP ROUND 2 : 72.8974176");
                    printf("\n\t CAP ROUND 3 : 84.2697705");
                    break;

                case 2:
                    printf("\n\t FEE : 130,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 3:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN SARDAR PATEL INSTITUTE OF TECHNOLOGY (SPIT)\n\t");
            printf("\n\t 1.COMPUTER ENGINEERING\n\t 2.ELECTRICAL ENGINEERING\n\t 3.CIVIL ENGINEERING\n\t 4.MECHANICAL ENGINEERING\n\t");
            printf("\n\t =================================\n\t");

            do
            {
                if (n17 > 4)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n17);
            } while (n17 > 4);

            switch (n17)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n124 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n124);
                } while (n124 > 2);

                switch (n124)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 90.0081429");
                    printf("\n\t CAP ROUND 2 : 88.0249580");
                    printf("\n\t CAP ROUND 3 : 90.0081429");
                    break;

                case 2:
                    printf("\n\t FEE : 172,804 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n125 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n125);
                } while (n125 > 2);

                switch (n125)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 97.4601522");
                    printf("\n\t CAP ROUND 2 : 96.8434161");
                    printf("\n\t CAP ROUND 3 : 96.1919816");
                    break;

                case 2:
                    printf("\n\t FEE : 172,804 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n126 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n126);
                } while (n126 > 2);

                switch (n126)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 94.7358445");
                    printf("\n\t CAP ROUND 2 : 93.3030001");
                    printf("\n\t CAP ROUND 3 : 94.5114997");
                    break;

                case 2:
                    printf("\n\t FEE : 172,804 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n127 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n127);
                } while (n127 > 2);

                switch (n127)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 97.2697226");
                    printf("\n\t CAP ROUND 2 : 96.7092973");
                    printf("\n\t CAP ROUND 3 : 96.3500502");
                    break;

                case 2:
                    printf("\n\t FEE : 172,804 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 4:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN VIVEKANAND EDUCATION SOCIETY'S INSTITUTE OF TECHNOLOGY (VESIT) \n\t ");
            printf("\n\t 1.COMPUTER ENGINEERING\n\t 2.INFORMATION TECHMOLOGY ENGINEERING\n\t 3.ELECTRONICS & COMPUTER SCIENCE ENGINEERING\n\t 4.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 5.AUTOMATION & ROBOTICS ENGINEERING\n\t");
            printf("\n\t =================================\n\t");

            do
            {
                if (n18 > 5)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n18);
            } while (n18 > 5);

            switch (n18)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n128 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n128);
                } while (n128 > 2);

                switch (n128)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 97.8540978");
                    printf("\n\t CAP ROUND 2 : 97.6728754");
                    printf("\n\t CAP ROUND 3 : 97.6403619");
                    break;

                case 2:
                    printf("\n\t FEE : 112,149 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN INFORMATION TECHMOLOGY ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n129 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n129);
                } while (n129 > 2);

                switch (n129)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 96.8953454");
                    printf("\n\t CAP ROUND 2 : 97.1164439");
                    printf("\n\t CAP ROUND 3 : 96.8434161");
                    break;

                case 2:
                    printf("\n\t FEE : 112,149 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & COMPUTER SCIENCE ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n130 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n130);
                } while (n130 > 2);

                switch (n130)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 94.0759664");
                    printf("\n\t CAP ROUND 2 : 93.5601746");
                    printf("\n\t CAP ROUND 3 : 93.9573805");
                    break;

                case 2:
                    printf("\n\t FEE : 112,149 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n131 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n131);
                } while (n131 > 2);

                switch (n131)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 93.0189660");
                    printf("\n\t CAP ROUND 2 : 91.1038771");
                    printf("\n\t CAP ROUND 3 : 91.8375279");
                    break;

                case 2:
                    printf("\n\t FEE : 112,149 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN AUTOMATION & ROBOTICS ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n132 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n132);
                } while (n132 > 2);

                switch (n132)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 89.8892235");
                    printf("\n\t CAP ROUND 2 : 85.7967175");
                    printf("\n\t CAP ROUND 3 : 92.3618660");
                    break;

                case 2:
                    printf("\n\t FEE : 112,149 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 5:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN DON BOSCO INSTITUTE OF TECHNOLOGY (DBIT) \n\t ");
            printf("\n\t 1.COMPUTER ENGINEERING\n\t 2.INFORMATION TECHNOLOGY ENGINEERING\n\t 3.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 4.MECHANICAL ENGINEERING\n\t");
            printf("\n\t =================================\n\t");

            do
            {
                if (n19 > 4)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n19);
            } while (n19 > 4);

            switch (n19)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n133 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n133);
                } while (n133 > 2);

                switch (n133)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 95.8064205");
                    printf("\n\t CAP ROUND 2 : 95.2797616");
                    printf("\n\t CAP ROUND 3 : 95.1149971");
                    break;

                case 2:
                    printf("\n\t FEE : 135,853 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN INFORMATION TECHNOLOGY ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n134 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n134);
                } while (n134 > 2);

                switch (n134)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 95.1396321");
                    printf("\n\t CAP ROUND 2 : 94.0029697");
                    printf("\n\t CAP ROUND 3 : 94.2809760");
                    break;

                case 2:
                    printf("\n\t FEE : 135,853 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n135 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n135);
                } while (n135 > 2);

                switch (n135)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 81.4005843");
                    printf("\n\t CAP ROUND 2 : 79.5386869");
                    printf("\n\t CAP ROUND 3 : 78.2814198");
                    break;

                case 2:
                    printf("\n\t FEE : 135,853 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n136 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n136);
                } while (n136 > 2);

                switch (n136)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 42.0206383");
                    printf("\n\t CAP ROUND 2 : 13.7713294");
                    printf("\n\t CAP ROUND 3 : 42.5186027");
                    break;

                case 2:
                    printf("\n\t FEE : 135,853 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        default:
            break;
        }
        break;

    case 4:
        printf("\n\t =================================");
        printf("\n\t LIST OF COLLEGES UNDER BABASAHEB AMBEDKAR TECHNOLOGICAL UNIVERSITY (BATU)\n\t");
        printf("\n\t 1.PES COLLEGE OF ENGINEERING\n\t 2.HI-TECH INSTITUTE OF TECHNOLOGY (HIT)\n\t 3.MARATHWADA INSTITUTE OF TECHNOLOGY (MIT)\n\t 4.SHREEYASH COLLEGE OF ENGINEERING AND TECHNOLOGY (SYCET)\n\t 5.CSMSS CHH.SHAHU COLLEGE OF ENGINEERING");
        printf("\n\t =================================\n\t");

        do
        {
            if (n20 > 5)
            {
                printf("\n\t WRONG INPUT...!!!");
            }
            printf("\n\t ENTER CHOICE FOR COLLEGE : ");
            scanf("%d", &n20);
        } while (n20 > 5);

        switch (n20)
        {
        case 1:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN PES COLLEGE OF ENGINEERING\n\t");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRONICS & COMPUTER ENGINEERING\n\t 3.COMPUTER SCIENCE & ENGINEERING (DATA SCIENCE)\n\t 4.ELECTRICAL ENGINEERING\n\t 5.CIVIL ENGINEERING\n\t 6.INFORMATIOIN TECHNOLOGY ENGINEERING");
            printf("\n\t =================================\n\t");

            do
            {
                if (n21 > 6)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n21);
            } while (n21 > 6);

            switch (n21)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n87 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n87);
                } while (n87 > 2);

                switch (n87)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 72.8897104");
                    printf("\n\t CAP ROUND 2 : 71.2367422");
                    printf("\n\t CAP ROUND 3 : 75.5619344");
                    break;

                case 2:
                    printf("\n\t FEE : 84,801 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & COMPUTER ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n88 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n88);
                } while (n88 > 2);

                switch (n88)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 33.5099087");
                    printf("\n\t CAP ROUND 2 : 51.1072039");
                    printf("\n\t CAP ROUND 3 : 60.0860804");
                    break;

                case 2:
                    printf("\n\t FEE : 84,801 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING (DATA SCIENCE)");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n89 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n89);
                } while (n89 > 2);

                switch (n89)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 42.7946749");
                    printf("\n\t CAP ROUND 2 : 57.4413646");
                    printf("\n\t CAP ROUND 3 : 63.5478045");
                    break;

                case 2:
                    printf("\n\t FEE : 84,801 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL & AUTOMATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n90 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n90);
                } while (n90 > 2);

                switch (n90)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 5.1279556");
                    printf("\n\t CAP ROUND 2 : 28.4665226");
                    printf("\n\t CAP ROUND 3 : 39.4196471");
                    break;

                case 2:
                    printf("\n\t FEE : 84,801 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n91 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n91);
                } while (n91 > 2);

                switch (n91)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 2.5896414");
                    printf("\n\t CAP ROUND 2 : 18.8401670");
                    printf("\n\t CAP ROUND 3 : 14.2356611");
                    break;

                case 2:
                    printf("\n\t FEE : 84,801 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 6:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n92 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n92);
                } while (n92 > 2);

                switch (n92)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 1.8975332");
                    printf("\n\t CAP ROUND 2 : 14.2356611");
                    printf("\n\t CAP ROUND 3 : 49.0525702");
                    break;

                case 2:
                    printf("\n\t FEE : 84,801 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 2:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN HI-TECH INSTITUTE OF TECHNOLOGY (HIT)\n\t");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.MECHANICAL ENGINEERING\n\t 3.CIVIL ENGINEERING\n\t 4.COMPUTER & ENGINEERING (ARTIFICAIL INTELLIGENCE AND MACHINE LEARNING)\n\t");
            printf("\n\t =================================\n\t");

            do
            {
                if (n22 > 3)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n22);
            } while (n22 > 3);

            switch (n22)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n93 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n93);
                } while (n93 > 2);

                switch (n93)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 53.7302794");
                    printf("\n\t CAP ROUND 2 : 51.2600953");
                    printf("\n\t CAP ROUND 3 : 61.6697194");
                    break;

                case 2:
                    printf("\n\t FEE : 70,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n94 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n94);
                } while (n94 > 2);

                switch (n94)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 10.4981278");
                    printf("\n\t CAP ROUND 2 : 2.7133624");
                    printf("\n\t CAP ROUND 3 : 20.3613489");
                    break;

                case 2:
                    printf("\n\t FEE : 70,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n95 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n95);
                } while (n95 > 2);

                switch (n95)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 2.7133624");
                    printf("\n\t CAP ROUND 2 : 6.6563016");
                    printf("\n\t CAP ROUND 3 : 7.7836913");
                    break;

                case 2:
                    printf("\n\t FEE : 70,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER & ENGINEERING (ARTIFICAIL INTELLIGENCE AND MACHINE LEARNING)");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n96 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n96);
                } while (n96 > 2);

                switch (n96)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 32.4992712");
                    printf("\n\t CAP ROUND 2 : 39.5925136");
                    printf("\n\t CAP ROUND 3 : 42.8034319");
                    break;

                case 2:
                    printf("\n\t FEE : 70,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");

            default:
                break;
            }
            break;

        case 3:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN ADITYA ENGINEERING COLLEGE (AEC) \n\t");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRICAL ENGINEERING\n\t 3.MECHANICAL ENGINEERING\n\t 4.COMPUTER SCIENCE & ENGINEERING (DATA SCIENCE)\n\t 5. ARTIFICIAL INTELLIGENCE & MACHINE LEARNING ENGINEERING\n\t 6.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t");
            printf("\n\t =================================\n\t");

            do
            {
                if (n23 > 6)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n23);
            } while (n23 > 6);

            switch (n23)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER & ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n97 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n97);
                } while (n97 > 2);

                switch (n97)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 32.2621925");
                    printf("\n\t CAP ROUND 2 : 19.8474395");
                    printf("\n\t CAP ROUND 3 : 27.3337429");
                    break;

                case 2:
                    printf("\n\t FEE : 120,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTIRCAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n98 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n98);
                } while (n98 > 2);

                switch (n98)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 3.2892818");
                    printf("\n\t CAP ROUND 2 : 6.8230277");
                    printf("\n\t CAP ROUND 3 : 6.8230277");
                    break;

                case 2:
                    printf("\n\t FEE : 120,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n99 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n99);
                } while (n99 > 2);

                switch (n99)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 6.8230277");
                    printf("\n\t CAP ROUND 2 : 6.8230277");
                    printf("\n\t CAP ROUND 3 : 68.5714285");
                    break;

                case 2:
                    printf("\n\t FEE : 120,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING (DATA SCIENCE) ");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n100 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n100);
                } while (n100 > 2);

                switch (n100)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 54.1664697");
                    printf("\n\t CAP ROUND 2 : 11.3082039");
                    printf("\n\t CAP ROUND 3 : 31.5015186");
                    break;

                case 2:
                    printf("\n\t FEE : 120,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ARTIFICIAL INTELLIGENCE & MACHINE LEARNING ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n101 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n101);
                } while (n101 > 2);

                switch (n101)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 34.1210946");
                    printf("\n\t CAP ROUND 2 : 16.5815096");
                    printf("\n\t CAP ROUND 3 : 8.2596443");
                    break;

                case 2:
                    printf("\n\t FEE : 120,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 6:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n102 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n102);
                } while (n102 > 2);

                switch (n102)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 7.7836913");
                    printf("\n\t CAP ROUND 2 : 64.8863260");
                    printf("\n\t CAP ROUND 3 : 10.7718485");
                    break;

                case 2:
                    printf("\n\t FEE : 120,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 4:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN SHREEYASH COLLEGE OF ENGINEERING AND TECHNOLOGY (SYCET)\n\t ");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.COMPUTER SCIENCE & ENGINEERING (DATA SCIENCE)\n\t 4.MECHANICAL ENGINEERING\n\t 5.CIVIL ENGINEERING\n\t");
            printf("\n\t =================================\n\t");
            do
            {
                if (n24 > 5)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n24);
            } while (n24 > 5);

            switch (n24)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n103 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n103);
                } while (n103 > 2);

                switch (n103)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 64.0609282");
                    printf("\n\t CAP ROUND 2 : 63.7147595");
                    printf("\n\t CAP ROUND 3 : 66.4465439");
                    break;

                case 2:
                    printf("\n\t FEE : 71,455 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & COMPUTER ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n104 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n104);
                } while (n104 > 2);

                switch (n104)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 38.5667023");
                    printf("\n\t CAP ROUND 2 : 42.7946749");
                    printf("\n\t CAP ROUND 3 : 61.2621174");
                    break;

                case 2:
                    printf("\n\t FEE : 71,455 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING (DATA SCIENCE)");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n105 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n105);
                } while (n105 > 2);

                switch (n105)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 50.9996691");
                    printf("\n\t CAP ROUND 2 : 48.2601391");
                    printf("\n\t CAP ROUND 3 : 65.2400587");
                    break;

                case 2:
                    printf("\n\t FEE : 71,455 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n106 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n106);
                } while (n106 > 2);

                switch (n106)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 10.1982314");
                    printf("\n\t CAP ROUND 2 : 13.5440394");
                    printf("\n\t CAP ROUND 3 : 34.6668564");
                    break;

                case 2:
                    printf("\n\t FEE : 71,455 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n107 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n107);
                } while (n107 > 2);

                switch (n107)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 1.7815683");
                    printf("\n\t CAP ROUND 2 : 0.7798837");
                    printf("\n\t CAP ROUND 3 : 41.9139826");
                    break;

                case 2:
                    printf("\n\t FEE : 71,455 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        case 5:
            printf("\n\t =================================");
            printf("\n\t LIST OF BRANCHES IN CSMSS CHH.SHAHU COLLEGE OF ENGINEERING\n\t ");
            printf("\n\t 1.COMPUTER SCIENCE & ENGINEERING\n\t 2.ELECTRONICS & TELECOMMUNICATION ENGINEERING\n\t 3.CIVIL ENGINEERING\n\t 4.MECHANICAL ENGINEERING\n\t 5.ELECTRICAL ENGINEERING\n\t 6.ELECTRONICS & COMPUTER ENGINEERING");
            printf("\n\t =================================\n\t");

            do
            {
                if (n25 > 6)
                {
                    printf("\n\t WRONG INPUT...!!!");
                }
                printf("\n\t ENTER CHOICE FOR BRANCH : ");
                scanf("%d", &n25);
            } while (n25 > 6);

            switch (n25)
            {
            case 1:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN COMPUTER SCIENCE & ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n108 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n108);
                } while (n108 > 2);

                switch (n108)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 79.5386869");
                    printf("\n\t CAP ROUND 2 : 78.3496848");
                    printf("\n\t CAP ROUND 3 : 81.8334533");
                    break;

                case 2:
                    printf("\n\t FEE : 80,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 2:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & TELECOMMUNICATION ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n109 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n109);
                } while (n109 > 2);

                switch (n109)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 61.2621174");
                    printf("\n\t CAP ROUND 2 : 68.5714285");
                    printf("\n\t CAP ROUND 3 : 71.1253958");
                    break;

                case 2:
                    printf("\n\t FEE : 80,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 3:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN CIVIL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n110 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n110);
                } while (n110 > 2);

                switch (n110)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 28.4814025");
                    printf("\n\t CAP ROUND 2 : 7.4458997");
                    printf("\n\t CAP ROUND 3 : 36.7166438");
                    break;

                case 2:
                    printf("\n\t FEE : 80,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 4:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN MECHANICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n111 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n111);
                } while (n111 > 2);

                switch (n111)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 39.4227966");
                    printf("\n\t CAP ROUND 2 : 28.4814025");
                    printf("\n\t CAP ROUND 3 : 41.9139826");
                    break;

                case 2:
                    printf("\n\t FEE : 80,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 5:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRICAL ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n112 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n112);
                } while (n112 > 2);

                switch (n112)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 51.1072039");
                    printf("\n\t CAP ROUND 2 : 48.2193247");
                    printf("\n\t CAP ROUND 3 : 65.7244332");
                    break;

                case 2:
                    printf("\n\t FEE : 80,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            case 6:
                printf("\n\t ============================");
                printf("\n\t YOU HAVE CHOOSEN ELECTRONICS & COMPUTER ENGINEERING");
                printf("\n\t ============================");
                printf("\n\t 1.MHT-CET CUT-OFF AY 2022-23");
                printf("\n\t 2.FEE STRUCTURE   AY 2022-23");
                printf("\n\t ============================");
                do
                {
                    if (n113 > 2)
                    {
                        printf("\n\t WRONG INPUT...!!!");
                    }
                    printf("\n\t ENTER CHOICE : ");
                    scanf("%d", &n113);
                } while (n113 > 2);

                switch (n113)
                {
                case 1:
                    printf("\n\t GENERAL OPEN CATEGORY");
                    printf("\n\t CAP ROUND 1 : 61.2621174");
                    printf("\n\t CAP ROUND 2 : 68.5714285");
                    printf("\n\t CAP ROUND 3 : 71.1253958");
                    break;

                case 2:
                    printf("\n\t FEE : 80,000 Rs");

                default:
                    break;
                }
                printf("\n\t ============================");
                break;

            default:
                break;
            }
            break;

        default:
            break;
        }

    default:
        break;
    }

    return 0;
}
