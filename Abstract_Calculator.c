#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


// Essencial
GtkBuilder *builder;
GtkWidget  *window;
GtkWidget  *window_start;
GtkWidget  *fixed;

// input
GtkWidget *spin_fixed1_button1;
GtkWidget *spin_fixed1_button2;
GtkWidget *spin_fixed1_button3;
GtkWidget *spin_fixed2_button1;
GtkWidget *spin_fixed2_button2;
GtkWidget *spin_fixed2_button3;
GtkWidget *spin_fixed3_button1;
GtkWidget *spin_fixed3_button2;
GtkWidget *spin_fixed3_button3;


GtkWidget *gtk_stackswitcher;
GtkWidget *stack;



//botões
GtkWidget *btn1;
GtkWidget *btn2;
GtkWidget *btn3;
GtkWidget *btn4;
GtkWidget *btn5;
GtkWidget *btn6;
GtkWidget *btn7;
GtkWidget *btn8;

GtkWidget *btn9;
GtkWidget *btn10;
GtkWidget *btn11;
GtkWidget *btn12;
GtkWidget *btn13;
GtkWidget *btn14;
GtkWidget *btn15;
GtkWidget *btn16;

GtkWidget *btn17;
GtkWidget *btn18;
GtkWidget *btn19;
GtkWidget *btn20;
GtkWidget *btn21;
GtkWidget *btn22;
GtkWidget *btn23;
GtkWidget *btn24;

GtkWidget *label_fixed1_resultado;
GtkWidget *label_fixed2_resultado;
GtkWidget *label_fixed3_resultado;

GtkWidget *label_fixed1_erro;
GtkWidget *label_fixed2_erro;
GtkWidget *label_fixed3_erro;



int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

    builder = gtk_builder_new_from_file("interface_matheus.glade");
    window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
    window_start = GTK_WIDGET(gtk_builder_get_object(builder, "window_start"));

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    g_signal_connect(window_start, "destroy", G_CALLBACK(gtk_main_quit), NULL);


    //Components//
    gtk_stackswitcher = GTK_WIDGET(gtk_builder_get_object(builder, "gtk_stackswitcher"));
    stack = GTK_WIDGET(gtk_builder_get_object(builder, "stack"));

    fixed = GTK_WIDGET(gtk_builder_get_object(builder, "fixed"));

    btn1 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed1_func1"));
    btn2 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed1_func2"));
    btn3 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed1_func3"));
    btn4 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed1_func4"));
    btn5 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed1_func5"));
    btn6 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed1_func6"));
    btn7 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed1_func7"));
    btn8 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed1_func8"));

    btn9  = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed2_func1"));
    btn10 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed2_func2"));
    btn11 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed2_func3"));
    btn12 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed2_func4"));
    btn13 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed2_func5"));
    btn14 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed2_func6"));
    btn15 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed2_func7"));
    btn16 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed2_func8"));

    btn17 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed3_func1"));
    btn18 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed3_func2"));
    btn19 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed3_func3"));
    btn20 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed3_func4"));
    btn21 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed3_func5"));
    btn22 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed3_func6"));
    btn23 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed3_func7"));
    btn24 = GTK_WIDGET(gtk_builder_get_object(builder, "button_fixed3_func8"));

    spin_fixed1_button1 = GTK_WIDGET(gtk_builder_get_object(builder, "spin_button_fixed1_x"));
    spin_fixed1_button2 = GTK_WIDGET(gtk_builder_get_object(builder, "spin_button_fixed1_k"));


    label_fixed1_resultado = GTK_WIDGET(gtk_builder_get_object(builder, "label_fixed1_resultado"));
    

    spin_fixed2_button1 = GTK_WIDGET(gtk_builder_get_object(builder, "spin_button_fixed2_x"));
    spin_fixed2_button2 = GTK_WIDGET(gtk_builder_get_object(builder, "spin_button_fixed2_k"));
    label_fixed2_resultado = GTK_WIDGET(gtk_builder_get_object(builder, "label_fixed2_resultado"));

    spin_fixed3_button1 = GTK_WIDGET(gtk_builder_get_object(builder, "spin_button_fixed3_k"));
    spin_fixed3_button2 = GTK_WIDGET(gtk_builder_get_object(builder, "spin_button_fixed3_a"));
    spin_fixed3_button3 = GTK_WIDGET(gtk_builder_get_object(builder, "spin_button_fixed3_b"));
    label_fixed3_resultado = GTK_WIDGET(gtk_builder_get_object(builder, "label_fixed3_resultado"));

    label_fixed1_erro = GTK_WIDGET(gtk_builder_get_object(builder, "label_fixed1_erro"));
    label_fixed2_erro = GTK_WIDGET(gtk_builder_get_object(builder, "label_fixed2_erro"));
    label_fixed3_erro = GTK_WIDGET(gtk_builder_get_object(builder, "label_fixed3_erro"));
    

    //Todos os demais sinais vão ser conectados com as funções neste arquivo
    gtk_builder_connect_signals(builder, NULL);
    //Tornado a janela visível
    gtk_widget_show(window_start);

    //Ouvindo todos os sinais
    gtk_main();

    //Retornando que o processo foi um êxito
    return EXIT_SUCCESS;
}

void on_button_start_clicked()
{
    gtk_widget_hide(window_start);
    gtk_widget_show(window);
}

// Funções

void on_button_fixed1_func1_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed1_button1));
    gdouble EntradaK = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed1_button2));

    gchar * texto ;
        texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, EntradaK);

        gtk_label_set_text(GTK_LABEL(label_fixed1_resultado), texto);
    
}


void on_button_fixed1_func2_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed1_button1));
    gdouble EntradaK = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed1_button2));


    gdouble produto = pow(EntradaX, EntradaK);

    gchar * texto ;
    texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

    gtk_label_set_text(GTK_LABEL(label_fixed1_resultado), texto);


}

void on_button_fixed1_func3_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed1_button1));
    gdouble EntradaK = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed1_button2));

    if(EntradaK == 1 || EntradaK == 0) 
    {
        gchar * texto ;
        texto = g_strdup_printf("K deve ser diferente de 1 ou 0.");
        gtk_label_set_text(GTK_LABEL(label_fixed1_resultado), texto);
    }
    else
    {
        gdouble produto = pow(EntradaK, EntradaX);

        gchar * texto ;
        texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

        gtk_label_set_text(GTK_LABEL(label_fixed1_resultado), texto);
    }

}

void on_button_fixed1_func4_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed1_button1));
    
    if(EntradaX <= 0)
    {
        gchar * texto ;
        texto = g_strdup_printf("X deve ser maior que 0.");
        gtk_label_set_text(GTK_LABEL(label_fixed1_resultado), texto);
    }
    else
    {
        gdouble produto = log(EntradaX);

        gchar * texto ;
        texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

        gtk_label_set_text(GTK_LABEL(label_fixed1_resultado), texto);
    }

    

}

void on_button_fixed1_func5_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed1_button1));

    if(EntradaX == 0)
    {
        gchar * texto ;
        texto = g_strdup_printf("K deve ser diferente de 0.");
        gtk_label_set_text(GTK_LABEL(label_fixed1_resultado), texto);

    }
    else
    {
        gdouble produto = 1/EntradaX;

        gchar * texto ;
        texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

        gtk_label_set_text(GTK_LABEL(label_fixed1_resultado), texto);
    }

}

void on_button_fixed1_func6_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed1_button1));

    gdouble produto = sin(EntradaX * M_PI / 180);

    gchar * texto ;
    texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

    gtk_label_set_text(GTK_LABEL(label_fixed1_resultado), texto);

}

void on_button_fixed1_func7_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed1_button1));


    gdouble produto = cos(EntradaX * M_PI / 180);

    gchar * texto ;
    texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

    gtk_label_set_text(GTK_LABEL(label_fixed1_resultado), texto);

}

void on_button_fixed1_func8_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed1_button1));

    if((((int) (EntradaX) / 90) % 2 == 1) && EntradaX != 0 && ((int)(EntradaX) % 90 == 0)){
        gchar * texto ;
        texto = g_strdup_printf("A tangente de %lf é indefinida.", EntradaX);

        gtk_label_set_text(GTK_LABEL(label_fixed1_resultado), texto);
    }else
    {

    gdouble produto = (int)(EntradaX / 90) % 2 == 0 && (int)(EntradaX) % 90 == 0 ? 0 : (float)tan((EntradaX * M_PI)/180);
    gchar * texto ;
    texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

    gtk_label_set_text(GTK_LABEL(label_fixed1_resultado), texto);
    }
}


//Derivada

void on_button_fixed2_func1_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed2_button1));
    gdouble EntradaK = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed2_button2));


    gchar * texto ;
    texto = g_strdup_printf("Resultado: f(%lf) = 0", EntradaX);

    gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
}


void on_button_fixed2_func2_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed2_button1));
    gdouble EntradaK = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed2_button2));

    if(EntradaK == 0 || EntradaX == 0) 
    {
        gchar * texto ;
        texto = g_strdup_printf(" K e X devem ser diferente de 0. ");
        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
    else
    {
        gdouble subtracao = EntradaK - 1;

        gdouble produto = EntradaK * pow(EntradaX, subtracao) ;

        gchar * texto ;
        texto = g_strdup_printf("Resultado: f'(%lf) = %lf", EntradaX, produto);

        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
    
}

void on_button_fixed2_func3_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed2_button1));
    gdouble EntradaK = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed2_button2));

    if(EntradaK == 0)
    {
        gchar * texto ;
        texto = g_strdup_printf("K deve ser diferente de 0.");
        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
    else
    {
        gdouble subtracao = EntradaK - 1;

        gdouble produto = pow(EntradaK, EntradaX) * log(EntradaK);

        gchar * texto ;
        texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
}

void on_button_fixed2_func4_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed2_button1));
    
    if(EntradaX == 0)
    {
       gchar * texto ;
        texto = g_strdup_printf("X deve ser diferente de 0.");
        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
    else
    {
        gdouble produto = 1 / EntradaX;

        gchar * texto;
        texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
}


void on_button_fixed2_func5_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed2_button1));

    if(EntradaX == 0)
    {
        gchar * texto ;
        texto = g_strdup_printf("X deve ser diferente de 0.");
        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
    else
    {
        gdouble produto = -1 / pow(EntradaX, 2);

        gchar * texto ;
        texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);   
    }

    
}

void on_button_fixed2_func6_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed2_button1));

    if(EntradaX >= 10 || EntradaX <= -10)
    {
        gdouble produto = cos(EntradaX);

        gchar * texto ;
        texto = g_strdup_printf("Os valores devem estar contidos entre 9 e -9");
        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
    else
    {
    gdouble produto = cos(EntradaX);

    gchar * texto ;
    texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

    gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
}


void on_button_fixed2_func7_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed2_button1));

    if(EntradaX >= 10 || EntradaX <= -10)
    {
        gdouble produto = cos(EntradaX);

        gchar * texto ;
        texto = g_strdup_printf("Os valores devem estar contidos entre 9 e -9");
        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
    else
    {
    gdouble produto = -sin(EntradaX);

    gchar * texto ;
    texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

    gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
}

void on_button_fixed2_func8_clicked(GtkButton *button)
{
    gdouble EntradaX = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed2_button1));

    if(EntradaX == 0)
    {
        gchar * texto ;
        texto = g_strdup_printf("O valor de X deve ser diferente de 0.");
        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }

    if(EntradaX >= 10 || EntradaX <= -10)
    {
        gdouble produto = cos(EntradaX);

        gchar * texto ;
        texto = g_strdup_printf("Os valores devem estar contidos entre 9 e -9");
        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
    else
    {
        gdouble valor = 1 / cos(EntradaX);
        gdouble produto = pow(valor, 2);

        gchar * texto ;
        texto = g_strdup_printf("Resultado: f(%lf) = %lf", EntradaX, produto);

        gtk_label_set_text(GTK_LABEL(label_fixed2_resultado), texto);
    }
    
}

// Integral Definida

void on_button_fixed3_func1_clicked(GtkButton *button)
{
    gdouble EntradaK = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button1));
    gdouble ValorA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button2));
    gdouble ValorB = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button3));

    gdouble produto = (EntradaK * ValorB) - (EntradaK * ValorA);

    gchar * texto ;
    texto = g_strdup_printf("Resultado: f(%lf, %lf) = %lf", ValorA, ValorB, produto);

    gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);
}


void on_button_fixed3_func2_clicked(GtkButton *button)
{
    gdouble EntradaK = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button1));
    gdouble ValorA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button2));
    gdouble ValorB = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button3));
    
    if(EntradaK == -1)
    {
        gchar * texto ;
        texto = g_strdup_printf("K deve ser diferente de -1.");
        gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);
    }

        gdouble soma = EntradaK + 1; 
        gdouble parte1 = pow(ValorA, soma);
        gdouble parte2 = pow(ValorB, soma);

        parte1 = parte1 / soma;
        parte2 = parte2 / soma;

        gdouble produto = parte2 - parte1 ;

        gchar * texto ;
        texto = g_strdup_printf("Resultado: f(%lf, %lf) = %lf", ValorA, ValorB, produto);

        gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);


}



void on_button_fixed3_func3_clicked(GtkButton *button)
{
    gdouble EntradaK = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button1));
    gdouble ValorA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button2));
    gdouble ValorB = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button3));

    if(EntradaK <= 1)
    {
        gchar * texto ;
        texto = g_strdup_printf("K deve ser maior que 1.");
        gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);
    }
    else
    {
        gdouble pat1 = pow(EntradaK, ValorA);
        gdouble pat2 = pow(EntradaK, ValorB);
        gdouble loga = log(EntradaK);

        gdouble div1 = pat1 / loga;
        gdouble div2 =  pat2 / loga;

        gdouble produto = div2 - div1;


        gchar * texto ;
        texto = g_strdup_printf("Resultado: f(%lf, %lf) = %lf", ValorA, ValorB, produto);

        gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);
    }
}


void on_button_fixed3_func4_clicked(GtkButton *button)
{
    gdouble ValorA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button2));
    gdouble ValorB = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button3));

    if(ValorA <= 1 || ValorB <= 1)
    {
        gchar * texto ;
        texto = g_strdup_printf("valor de A e Valor de B devem ser maior que 1.");
        gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);
    }
    else
    {
        gdouble produto = (double)(ValorB * (log(ValorB) - 1)) - (ValorA * (log(ValorA) - 1));

        gchar * texto ;
        texto = g_strdup_printf("Resultado: f(%lf, %lf) = %lf", ValorA, ValorB, produto);

        gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);
    }

   
}


void on_button_fixed3_func5_clicked(GtkButton *button)
{
    gdouble ValorA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button2));
    gdouble ValorB = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button3));

    if(ValorA == 0 || ValorB == 0)
    {
        gchar * texto ;
        texto = g_strdup_printf("valor de A e Valor de B não pode ser 0.");
        gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);
    }
    else
    {
    gdouble produto = (double)((log(ValorA < 0 ? ValorA * -1 : ValorA))) - ((log(ValorB < 0 ? ValorB * -1 : ValorB)));

    gchar * texto ;
    texto = g_strdup_printf("Resultado: f(%lf, %lf) = %lf", ValorA, ValorB, produto);

    gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);
    }
}


void on_button_fixed3_func6_clicked(GtkButton *button)
{
    gdouble ValorA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button2));
    gdouble ValorB = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button3));

    gdouble produto =  -cos(ValorB) - -cos(ValorA);

    gchar * texto ;
    texto = g_strdup_printf("Resultado: f(%lf, %lf) = %lf", ValorA, ValorB, produto);

    gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);
}

void on_button_fixed3_func7_clicked(GtkButton *button)
{
    gdouble ValorA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button2));
    gdouble ValorB = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button3));

    gdouble produto = sin(ValorB) - sin(ValorA) ;

    gchar * texto ;
    texto = g_strdup_printf("Resultado: f(%lf, %lf) = %lf", ValorA, ValorB, produto);

    gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);
}


void on_button_fixed3_func8_clicked(GtkButton *button)
{
    gdouble ValorA = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button2));
    gdouble ValorB = gtk_spin_button_get_value(GTK_SPIN_BUTTON(spin_fixed3_button3));
 
    if(ValorA == 0 || ValorB == 0)
    {
        gchar * texto ;
        texto = g_strdup_printf("O valor de A e o Valor de B dever ser maiores que 0.");

        gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);
    }
    else{
    gdouble produto =  (double)-((log(cos(ValorB) < 0 ? cos(ValorB) * -1 : cos(ValorB))) - (log(cos(ValorA) < 0 ? cos(ValorA) * -1 : cos(ValorA))));

    gchar * texto ;
    texto = g_strdup_printf("Resultado: f(%lf, %lf) = %lf", ValorA, ValorB, produto);

    gtk_label_set_text(GTK_LABEL(label_fixed3_resultado), texto);
    }
}

