#include "lagrangeline.h"


std::vector<double> lagrangeline::getnodecoordinates(int order)
{
     switch (order)
     {
          case 1:
               return std::vector<double> {-1.0, 0.0, 0.0, 1.0, 0.0, 0.0};
          case 2:
               return std::vector<double> {-1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0};
          case 3:
               return std::vector<double> {-1.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.33333333333333333333, 0.0, 0.0, 0.33333333333333333333, 0.0, 0.0};
          case 4:
               return std::vector<double> {-1.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0};
          case 5:
               return std::vector<double> {-1.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.6, 0.0, 0.0, -0.2, 0.0, 0.0, 0.2, 0.0, 0.0, 0.6, 0.0, 0.0};
          case 6:
               return std::vector<double> {-1.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.66666666666666666667, 0.0, 0.0, -0.33333333333333333333, 0.0, 0.0, 0.0, 0.0, 0.0, 0.33333333333333333333, 0.0, 0.0, 0.66666666666666666667, 0.0, 0.0};
          case 7:
               return std::vector<double> {-1.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.71428571428571428571, 0.0, 0.0, -0.42857142857142857143, 0.0, 0.0, -0.14285714285714285714, 0.0, 0.0, 0.14285714285714285714, 0.0, 0.0, 0.42857142857142857143, 0.0, 0.0, 0.71428571428571428571, 0.0, 0.0};
          case 8:
               return std::vector<double> {-1.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.75, 0.0, 0.0, -0.5, 0.0, 0.0, -0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.25, 0.0, 0.0, 0.5, 0.0, 0.0, 0.75, 0.0, 0.0};
          case 9:
               return std::vector<double> {-1.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.77777777777777777778, 0.0, 0.0, -0.55555555555555555556, 0.0, 0.0, -0.33333333333333333333, 0.0, 0.0, -0.11111111111111111111, 0.0, 0.0, 0.11111111111111111111, 0.0, 0.0, 0.33333333333333333333, 0.0, 0.0, 0.55555555555555555556, 0.0, 0.0, 0.77777777777777777778, 0.0, 0.0};
          case 10:
               return std::vector<double> {-1.0, 0.0, 0.0, 1.0, 0.0, 0.0, -0.8, 0.0, 0.0, -0.6, 0.0, 0.0, -0.4, 0.0, 0.0, -0.2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.2, 0.0, 0.0, 0.4, 0.0, 0.0, 0.6, 0.0, 0.0, 0.8, 0.0, 0.0};
          default:
               std::cout << "Error in 'lagrangeline' namespace: coordinates of order 11 and above not defined" << std::endl;
               abort();
               break;
     }
}

std::vector<polynomial> lagrangeline::getformfunctionpolynomials(int order)
{
     element line(1,order);
     std::vector<polynomial> formfunctionpoly(line.countcurvednodes());

     switch (order)
     {
          case 1:
               formfunctionpoly[0].set({{{0.5}}, {{-0.5}}});
               formfunctionpoly[1].set({{{0.5}}, {{0.5}}});
               break;
          case 2:
               formfunctionpoly[0].set({{{0.0}}, {{-0.5}}, {{0.5}}});
               formfunctionpoly[1].set({{{0.0}}, {{0.5}}, {{0.5}}});
               formfunctionpoly[2].set({{{1.0}}, {{0.0}}, {{-1.0}}});
               break;
          case 3:
               formfunctionpoly[0].set({{{-0.0625}}, {{0.0625}}, {{0.5625}}, {{-0.5625}}});
               formfunctionpoly[1].set({{{-0.0625}}, {{-0.0625}}, {{0.5625}}, {{0.5625}}});
               formfunctionpoly[2].set({{{0.5625}}, {{-1.6875}}, {{-0.5625}}, {{1.6875}}});
               formfunctionpoly[3].set({{{0.5625}}, {{1.6875}}, {{-0.5625}}, {{-1.6875}}});
               break;
          case 4:
               formfunctionpoly[0].set({{{0.0}}, {{0.16666666666666666667}}, {{-0.16666666666666666667}}, {{-0.66666666666666666667}}, {{0.66666666666666666667}}});
               formfunctionpoly[1].set({{{0.0}}, {{-0.16666666666666666667}}, {{-0.16666666666666666667}}, {{0.66666666666666666667}}, {{0.66666666666666666667}}});
               formfunctionpoly[2].set({{{0.0}}, {{-1.3333333333333333333}}, {{2.6666666666666666667}}, {{1.3333333333333333333}}, {{-2.6666666666666666667}}});
               formfunctionpoly[3].set({{{1.0}}, {{0.0}}, {{-5.0}}, {{0.0}}, {{4.0}}});
               formfunctionpoly[4].set({{{0.0}}, {{1.3333333333333333333}}, {{2.6666666666666666667}}, {{-1.3333333333333333333}}, {{-2.6666666666666666667}}});
               break;
          case 5:
               formfunctionpoly[0].set({{{0.01171875}}, {{-0.01171875}}, {{-0.32552083333333333333}}, {{0.32552083333333333333}}, {{0.81380208333333333333}}, {{-0.81380208333333333333}}});
               formfunctionpoly[1].set({{{0.01171875}}, {{0.01171875}}, {{-0.32552083333333333333}}, {{-0.32552083333333333333}}, {{0.81380208333333333333}}, {{0.81380208333333333333}}});
               formfunctionpoly[2].set({{{-0.09765625}}, {{0.16276041666666666667}}, {{2.5390625}}, {{-4.2317708333333333333}}, {{-2.44140625}}, {{4.0690104166666666667}}});
               formfunctionpoly[3].set({{{0.5859375}}, {{-2.9296875}}, {{-2.2135416666666666667}}, {{11.067708333333333333}}, {{1.6276041666666666667}}, {{-8.1380208333333333333}}});
               formfunctionpoly[4].set({{{0.5859375}}, {{2.9296875}}, {{-2.2135416666666666667}}, {{-11.067708333333333333}}, {{1.6276041666666666667}}, {{8.1380208333333333333}}});
               formfunctionpoly[5].set({{{-0.09765625}}, {{-0.16276041666666666667}}, {{2.5390625}}, {{4.2317708333333333333}}, {{-2.44140625}}, {{-4.0690104166666666667}}});
               break;
          case 6:
               formfunctionpoly[0].set({{{0.0}}, {{-0.05}}, {{0.05}}, {{0.5625}}, {{-0.5625}}, {{-1.0125}}, {{1.0125}}});
               formfunctionpoly[1].set({{{0.0}}, {{0.05}}, {{0.05}}, {{-0.5625}}, {{-0.5625}}, {{1.0125}}, {{1.0125}}});
               formfunctionpoly[2].set({{{0.0}}, {{0.45}}, {{-0.675}}, {{-4.5}}, {{6.75}}, {{4.05}}, {{-6.075}}});
               formfunctionpoly[3].set({{{0.0}}, {{-2.25}}, {{6.75}}, {{7.3125}}, {{-21.9375}}, {{-5.0625}}, {{15.1875}}});
               formfunctionpoly[4].set({{{1.0}}, {{0.0}}, {{-12.25}}, {{0.0}}, {{31.5}}, {{0.0}}, {{-20.25}}});
               formfunctionpoly[5].set({{{0.0}}, {{2.25}}, {{6.75}}, {{-7.3125}}, {{-21.9375}}, {{5.0625}}, {{15.1875}}});
               formfunctionpoly[6].set({{{0.0}}, {{-0.45}}, {{-0.675}}, {{4.5}}, {{6.75}}, {{-4.05}}, {{-6.075}}});
               break;
          case 7:
               formfunctionpoly[0].set({{{-0.0024414062500000010784}}, {{0.0024414062499999973523}}, {{0.13770616319444450203}}, {{-0.13770616319444430318}}, {{-0.91183810763888912784}}, {{0.91183810763888873132}}, {{1.2765733506944446269}}, {{-1.2765733506944444255}}});
               formfunctionpoly[1].set({{{-0.0024414062499999973327}}, {{-0.0024414062500000010403}}, {{0.13770616319444428423}}, {{0.13770616319444447987}}, {{-0.91183810763888739699}}, {{-0.91183810763888767297}}, {{1.2765733506944431101}}, {{1.2765733506944431941}}});
               formfunctionpoly[2].set({{{0.023925781250000009138}}, {{-0.033496093749999985154}}, {{-1.3265516493055560613}}, {{1.8571723090277769656}}, {{7.6854926215277807034}}, {{-10.759689670138886728}}, {{-6.3828667534722246512}}, {{8.9360134548611097471}}});
               formfunctionpoly[3].set({{{-0.11962890625000003218}}, {{0.27913411458333329986}}, {{6.2159179687500018251}}, {{-14.503808593749998094}}, {{-17.585449218750012536}}, {{41.032714843749990341}}, {{11.489160156250010743}}, {{-26.808040364583325547}}});
               formfunctionpoly[4].set({{{0.59814453125000006158}}, {{-4.1870117187499999627}}, {{-5.0270724826388924439}}, {{35.189507378472219928}}, {{10.811794704861138269}}, {{-75.682562934027756388}}, {{-6.3828667534722458861}}, {{44.680067274305536422}}});
               formfunctionpoly[5].set({{{0.59814453124999993048}}, {{4.1870117187499999811}}, {{-5.0270724826388848207}}, {{-35.189507378472220812}}, {{10.811794704861077689}}, {{75.682562934027751096}}, {{-6.3828667534721927988}}, {{-44.680067274305530265}}});
               formfunctionpoly[6].set({{{-0.11962890624999995352}}, {{-0.27913411458333333305}}, {{6.2159179687499972512}}, {{14.503808593749999684}}, {{-17.585449218749976188}}, {{-41.032714843749980816}}, {{11.48916015624997889}}, {{26.808040364583314465}}});
               formfunctionpoly[7].set({{{0.023925781249999982918}}, {{0.033496093750000003594}}, {{-1.3265516493055545367}}, {{-1.857172309027777849}}, {{7.6854926215277685875}}, {{10.759689670138881436}}, {{-6.3828667534722140337}}, {{-8.9360134548611035904}}});
               break;
          case 8:
               formfunctionpoly[0].set({{{0.0}}, {{0.014285714285714285714}}, {{-0.014285714285714285714}}, {{-0.31111111111111111111}}, {{0.31111111111111111111}}, {{1.4222222222222222222}}, {{-1.4222222222222222222}}, {{-1.6253968253968253968}}, {{1.6253968253968253968}}});
               formfunctionpoly[1].set({{{0.0}}, {{-0.014285714285714285714}}, {{-0.014285714285714285714}}, {{0.31111111111111111111}}, {{0.31111111111111111111}}, {{-1.4222222222222222222}}, {{-1.4222222222222222222}}, {{1.6253968253968253968}}, {{1.6253968253968253968}}});
               formfunctionpoly[2].set({{{0.0}}, {{-0.15238095238095238095}}, {{0.2031746031746031746}}, {{3.2}}, {{-4.2666666666666666667}}, {{-12.8}}, {{17.066666666666666667}}, {{9.752380952380952381}}, {{-13.003174603174603175}}});
               formfunctionpoly[3].set({{{0.0}}, {{0.8}}, {{-1.6}}, {{-15.022222222222222222}}, {{30.044444444444444444}}, {{36.977777777777777778}}, {{-73.955555555555555556}}, {{-22.755555555555555556}}, {{45.511111111111111111}}});
               formfunctionpoly[4].set({{{0.0}}, {{-3.2}}, {{12.8}}, {{21.688888888888888889}}, {{-86.755555555555555556}}, {{-41.244444444444444444}}, {{164.97777777777777778}}, {{22.755555555555555556}}, {{-91.022222222222222222}}});
               formfunctionpoly[5].set({{{1.0}}, {{0.0}}, {{-22.777777777777777778}}, {{0.0}}, {{121.33333333333333333}}, {{0.0}}, {{-213.33333333333333333}}, {{0.0}}, {{113.77777777777777778}}});
               formfunctionpoly[6].set({{{0.0}}, {{3.2}}, {{12.8}}, {{-21.688888888888888889}}, {{-86.755555555555555556}}, {{41.244444444444444444}}, {{164.97777777777777778}}, {{-22.755555555555555556}}, {{-91.022222222222222222}}});
               formfunctionpoly[7].set({{{0.0}}, {{-0.8}}, {{-1.6}}, {{15.022222222222222222}}, {{30.044444444444444444}}, {{-36.977777777777777778}}, {{-73.955555555555555556}}, {{22.755555555555555556}}, {{45.511111111111111111}}});
               formfunctionpoly[8].set({{{0.0}}, {{0.15238095238095238095}}, {{0.2031746031746031746}}, {{-3.2}}, {{-4.2666666666666666667}}, {{12.8}}, {{17.066666666666666667}}, {{-9.752380952380952381}}, {{-13.003174603174603175}}});
               break;
          case 9:
               formfunctionpoly[0].set({{{0.00053405761718749968155}}, {{-0.00053405761718750347536}}, {{-0.05067836216517854078}}, {{0.050678362165178892124}}, {{0.62737426757812466545}}, {{-0.62737426757812834446}}, {{-2.1624389648437491823}}, {{2.1624389648437571111}}, {{2.085209001813615558}}, {{-2.0852090018136201553}}});
               formfunctionpoly[1].set({{{0.0005340576171874974084}}, {{0.00053405761718749221542}}, {{-0.050678362165178333298}}, {{-0.050678362165177850694}}, {{0.62737426757812274682}}, {{0.627374267578117596}}, {{-2.162438964843747013}}, {{-2.1624389648437351635}}, {{2.0852090018136151021}}, {{2.085209001813607926}}});
               formfunctionpoly[2].set({{{-0.0061798095703124979929}}, {{0.0079454694475446723029}}, {{0.58238525390624979552}}, {{-0.74878104073660985502}}, {{-6.8833190917968721286}}, {{8.849981689453153259}}, {{20.903576660156238248}}, {{-26.876027134486667072}}, {{-14.596463012695303417}}, {{18.766881016322578996}}});
               formfunctionpoly[3].set({{{0.034606933593750006902}}, {{-0.062292480468750066487}}, {{-3.206438337053571955}}, {{5.7715890066964346844}}, {{33.548950195312499024}}, {{-60.388110351562565852}}, {{-72.081298828124947998}}, {{129.74633789062515676}}, {{41.704180036272270922}}, {{-75.067524065290275522}}});
               formfunctionpoly[4].set({{{-0.13458251953125006832}}, {{0.40374755859374996739}}, {{11.694287109375005974}}, {{-35.082861328124996961}}, {{-65.620678710937537961}}, {{196.86203613281248156}}, {{112.44682617187489198}}, {{-337.34047851562506541}}, {{-58.385852050781109924}}, {{175.15755615234383084}}});
               formfunctionpoly[5].set({{{0.6056213378906251927}}, {{-5.4505920410156246192}}, {{-9.0195556640625172021}}, {{81.176000976562464866}}, {{38.32767333984387962}}, {{-344.94906005859341756}}, {{-59.106665039062388826}}, {{531.95998535156206061}}, {{29.192926025390401215}}, {{-262.7363342285154833}}});
               formfunctionpoly[6].set({{{0.60562133789062471934}}, {{5.4505920410156242889}}, {{-9.0195556640624747277}}, {{-81.176000976562434426}}, {{38.327673339843546637}}, {{344.94906005859311252}}, {{-59.106665039062536006}}, {{-531.95998535156150934}}, {{29.192926025390839378}}, {{262.73633422851520696}}});
               formfunctionpoly[7].set({{{-0.13458251953124976521}}, {{-0.40374755859374934126}}, {{11.694287109374978747}}, {{35.082861328124939254}}, {{-65.620678710937322055}}, {{-196.86203613281190239}}, {{112.44682617187496207}}, {{337.34047851562401167}}, {{-58.385852050781368992}}, {{-175.15755615234329919}}});
               formfunctionpoly[8].set({{{0.03460693359374988768}}, {{0.062292480468749668592}}, {{-3.2064383370535612193}}, {{-5.7715890066963979963}}, {{33.548950195312411706}}, {{60.388110351562196322}}, {{-72.081298828124954006}}, {{-129.7463378906244738}}, {{41.704180036272353631}}, {{75.067524065289925807}}});
               formfunctionpoly[9].set({{{-0.0061798095703124721934}}, {{-0.0079454694475445589442}}, {{0.58238525390624746156}}, {{0.7487810407365993931}}, {{-6.8833190917968522542}}, {{-8.8499816894530471076}}, {{20.903576660156230739}}, {{26.876027134486464638}}, {{-14.596463012695313474}}, {{-18.766881016322472365}}});
               break;
          case 10:
               formfunctionpoly[0].set({{{0.0}}, {{-0.0039682539682539709517}}, {{0.003968253968253984273}}, {{0.14123126102292777332}}, {{-0.14123126102292825269}}, {{-1.1754918981481485436}}, {{1.1754918981481530138}}, {{3.2293733465608494557}}, {{-3.2293733465608558447}}, {{-2.6911444554673747145}}, {{2.6911444554673770993}}});
               formfunctionpoly[1].set({{{0.0}}, {{0.0039682539682539826916}}, {{0.0039682539682539582308}}, {{-0.14123126102292822266}}, {{-0.14123126102292731243}}, {{1.175491898148153026}}, {{1.1754918981481449357}}, {{-3.2293733465608587968}}, {{-3.2293733465608396197}}, {{2.6911444554673800109}}, {{2.6911444554673680382}}});
               formfunctionpoly[2].set({{{0.0}}, {{0.04960317460317457583}}, {{-0.062003968253968362695}}, {{-1.737488977072309272}}, {{2.1718612213403917478}}, {{13.744212962962949748}}, {{-17.180266203703736487}}, {{-33.585482804232794013}}, {{41.981853505291056992}}, {{21.529155643738978962}}, {{-26.91144455467374389}}});
               formfunctionpoly[3].set({{{0.0}}, {{-0.29761904761904728873}}, {{0.49603174603174631485}}, {{10.063244047619035003}}, {{-16.772073412698421976}}, {{-70.800781249999875162}}, {{118.00130208333341723}}, {{133.69605654761884941}}, {{-222.82676091269848515}}, {{-72.660900297618961962}}, {{121.10150049603174358}}});
               formfunctionpoly[4].set({{{0.0}}, {{1.1904761904761891418}}, {{-2.9761904761904764634}}, {{-36.119378306878256807}}, {{90.298445767195774318}}, {{169.27083333333285784}}, {{-423.17708333333340814}}, {{-263.51686507936420899}}, {{658.79216269841253083}}, {{129.17493386243341881}}, {{-322.93733465608442054}}});
               formfunctionpoly[5].set({{{0.0}}, {{-4.1666666666666637114}}, {{20.833333333333333086}}, {{48.292824074073964018}}, {{-241.46412037037035644}}, {{-175.23871527777675165}}, {{876.1935763888887956}}, {{244.14062499999799083}}, {{-1220.7031249999991916}}, {{-113.02806712962853948}}, {{565.14033564814741937}}});
               formfunctionpoly[6].set({{{1.0}}, {{-0.0000000000000040822873675240927863}}, {{-36.590277777777776754}}, {{0.00000000000015140234616804536447}}, {{331.81423611111106804}}, {{-0.0000000000013975467490724032299}}, {{-1110.0260416666663293}}, {{0.0000000000028596104719741283797}}, {{1491.9704861111096624}}, {{-0.0000000000016093837817022464215}}, {{-678.16840277777662439}}});
               formfunctionpoly[7].set({{{0.0}}, {{4.1666666666666703416}}, {{20.833333333333331992}}, {{-48.292824074074210036}}, {{-241.46412037037031695}}, {{175.23871527777902538}}, {{876.19357638888845632}}, {{-244.14062500000264467}}, {{-1220.7031249999985102}}, {{113.02806712963115898}}, {{565.14033564814703881}}});
               formfunctionpoly[8].set({{{0.0}}, {{-1.1904761904761926331}}, {{-2.9761904761904752134}}, {{36.119378306878386556}}, {{90.298445767195729186}}, {{-169.27083333333406194}}, {{-423.17708333333302039}}, {{263.51686507936667603}}, {{658.79216269841175203}}, {{-129.17493386243480801}}, {{-322.93733465608398561}}});
               formfunctionpoly[9].set({{{0.0}}, {{0.29761904761904841201}}, {{0.49603174603174561171}}, {{-10.063244047619076888}}, {{-16.772073412698396589}}, {{70.800781250000267216}}, {{118.00130208333319912}}, {{-133.69605654761965436}}, {{-222.82676091269804707}}, {{72.660900297619415622}}, {{121.10150049603149893}}});
               formfunctionpoly[10].set({{{0.0}}, {{-0.049603174603174767602}}, {{-0.062003968253968154357}}, {{1.7374889770723164736}}, {{2.1718612213403842257}}, {{-13.744212962963018365}}, {{-17.180266203703671862}}, {{33.585482804232935499}}, {{41.981853505290927192}}, {{-21.529155643739058841}}, {{-26.911444554673671401}}});
               break;
          default:
               std::cout << "Error in 'lagrangeline' namespace: Lagrange form functions of order 11 and above not defined" << std::endl;
               abort();
               break;
     }

     return formfunctionpoly;
}