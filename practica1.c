#include <stdio.h>

// Funciones globales 

int escena;
int tieneFlorRoja;
int tieneFlorAmarilla;
int tieneHerradura;
int entregadaFlorRoja;
int entregadaFlorAmarilla;
int encendidoFaro;
int hablarMadeline;
int ponerHerradura;

void HablaMadeleine()
{
    if(escena == 2)
    {
        printf("NOTA: El farero esta enfermo, puedes dejarle objetos en el buzon\n");
        printf("-------------------------------\n");
        printf("Los objetos son: Flor roja (en el bosque Norte) y flor amarilla (en el bosque Sur)\n");
        printf("-------------------------------\n");
    }
    if(encendidoFaro = 1 && escena == 3)
    {
        printf("Deberias ponerle la herradura\n");
        printf("-------------------------------\n");
    }
    if(escena == 6)
    {
        printf("He encontrado una herradura\n");
        printf("-------------------------------\n");
        hablarMadeline = 1;
    }
}
void HablaEsparrou()
{
    if(escena == 1)
    {
        printf("Debes hablar con Kaneda.\n");
        printf("-------------------------------\n");
    }
    if(escena == 2)
    {
        printf("Debes hablar con Madeleine.\n");
        printf("-------------------------------\n");
    }
    if(escena == 3)
    {
        printf("Debes hablar con Kaneda\n");
        printf("-------------------------------\n");
    }
    if(escena == 4)
    {
        printf("Debes hablar con Kaneda\n");
        printf("-------------------------------\n");
    }
    if(escena == 5)
    {
        if(tieneFlorRoja == 1)
        {
            printf("Debes ir a dejar las flores en el Buzon del farero\n");
            printf("-------------------------------\n");
        }
        if(tieneFlorRoja == 0)
        {
            printf("Deberias a por la otra flor\n");
            printf("-------------------------------\n");
        }
    }
    if(escena == 6)
    {
        if(tieneFlorAmarilla == 1)
        {
            printf("Debes ir a dejar las flores en el Buzon del farero\n");
            printf("-------------------------------\n");
        }
        if(tieneFlorAmarilla == 0)
        {
            printf("Deberias a por la otra flor\n");
            printf("-------------------------------\n");
        }
    }
}
void HablarKaneda()
{
    if(escena == 1)
    {
        printf("Hablas con Kaneda\n");
        printf("-------------------------------\n");
        printf("El farero del pueblo esta enfermo\n");
        printf("-------------------------------\n");
    }
    else if(escena == 3 || escena == 4)
    {
        printf("Hablas con Kaneda\n");
        printf("-------------------------------\n");
        printf("BlueDonkey a veces viene a beber al lago, pero solo si el faro esta encendido y ahora esta APAGADO.\n");
        printf("-------------------------------\n"); 
    } 
}
void DescribeEscena()
{
    if(escena == 1)
    {
        puedeIr();
        printf("ESTAS EN DONKEY VILLAGE.\n");
        printf("-------------------------------\n");
        printf("  ____||____\n");
        printf(" ///////////\\\n");
        printf("///////////  \\\n");
        printf("|    _    |  |\n");
        printf("|[] | | []|[]|\n");
        printf("|   | |   |  |\n");
        printf("-------------------------------\n");
    }
    else if(escena == 2)
    {
        printf("ESTAS EN CASA DEL FARERO.\n");
        printf("-------------------------------\n");
        printf("     _|=|__________\\\n");
        printf("    /              \\\n");
        printf("   /                \\\n");
        printf("  /__________________\\\n");
        printf("   ||  || /--\\ ||  ||\n");
        printf("   ||[]|| | .| ||[]||\n");
        printf(" ()||__||_|__|_||__||()\n");
        printf("( )|-|-|-|====|-|-|-|( )");
        printf("^^^^^^^^^^====^^^^^^^^^^^\n");
        printf("-------------------------------\n");
        printf("Puedes hablar con Madeline, esta en el buzon\n");
        printf("-------------------------------\n");
        if(tieneFlorAmarilla == 1 && tieneFlorRoja == 1)
        {
            printf("Quieres dejarle las flores en el buzon?\n");
            printf("-------------------------------\n");   
        }
    }
    else if(escena == 3)
    {
        printf("ESTAS EN EL LAGO TOGA.\n");
        printf("-------------------------------\n");
        printf("___________________________________________\n");
        printf(" ~          ~         ~       ~      ~   \n");
        printf("      ~~                  ~~       ~~   \n");
        printf("~~~            ~~~          ~~~       \n");
        printf("     ~~~~               ~~~~        \n");
        printf("~~~~~        ~~~~~~       ~~~~~\n");
        printf("-------------------------------\n");
        if(encendidoFaro == 1)
        {
            printf("Ha aparecido el BLUEDONKEY!\n");
            printf("Algo me dice que quiere tu herradura!\n");
            printf("-------------------------------\n");
        }
    }
    else if(escena == 4)
    {
        printf("ESTAS EN EL FARO.\n");
        printf("-------------------------------\n");
        printf("  _^_\n");
        printf("  |@|\n");        
        printf(" =====\n");
        printf("  #::\n");
        printf("  #::\n");        
        printf("  #::\n");
        printf("  #::\n");
        printf("  #::\n");
        printf("###::^-..\n");
        printf("         ^ ~ ~~ ~~ ~ ~ ~\n");
        printf("          \\~~ ~~ ~ ~  ~~~~~\n");
        printf("-------------------------------\n");        
    }
    else if(escena == 5)
    {
        printf("ESTAS EN EL BOSQUE SUR.\n");
        printf("-------------------------------\n");
        printf("                                   /\\\n");        
        printf("                              /\\  //\\\n");
        printf("                       /\\    //\\///\\\\        /\\\n");
        printf("                      //\\  ///\\////\\\\  /\\  //\\\n");        
        printf("         /\\          /  ^ \\/^ ^/^  ^  ^ \\/^ \\/  ^ \\\n");
        printf("        / ^\\    /\\  / ^   /  ^/ ^ ^ ^   ^\\ ^/  ^^  \\\n");
        printf("       /^   \\  / ^\\/ ^ ^   ^ / ^  ^    ^  \\/ ^   ^  \\ \n");
        printf("      /  ^ ^ \\/^  ^\\ ^ ^ ^   ^  ^   ^   ____  ^   ^  \\ \n");
        printf("-------------------------------\n");        
    }
    else if(escena == 6)
    {
        printf("ESTAS EN EL BOSQUE NORTE.\n");
        printf("-------------------------------\n");
        printf("          /\\\n");        
        printf("         /**\\\n");
        printf("        /****\\   /\\\n");
        printf("       /      \\ /**\\\n");        
        printf("      /  /\\    /    \\        /\\    /\\  /\\      /\\            /\\/\\/\\  /\\\n");
        printf("     /  /  \\  /      \\      /  \\/\\/  \\/  \\  /\\/  \\/\\  /\\  /\\/ / /  \\/  \\\n");
        printf("    /  /    \\/ /\\     \\    /    \\ \\  /    \\/ /   /  \\/  \\/  \\  /    \\   \\\n");
        printf("   /  /      \\/  \\/\\   \\  /      \\    /   /    \\\n");
        printf("-------------------------------\n");
    }
}
int puedeIr(int escenaUsuario)
{
    int valido = 0;

    if(escena == 1 && escenaUsuario == 2 || escena == 1 && escenaUsuario == 3 || escena == 1 && escenaUsuario == 6)
    {
        valido = 1;
        printf("CAMINANDO\n");
        printf("-------------------------------\n");
        printf("  o \n");
        printf(" /|\\\n");
        printf(" / \\\n");
        printf("-------------------------------\n");
    }
    else if(escena == 2 && escenaUsuario == 1)
    {
        valido = 1;
        printf("CAMINANDO\n");
        printf("-------------------------------\n");
        printf("  o \n");
        printf(" /|\\\n");
        printf(" / \\\n");
        printf("-------------------------------\n");
    }
    else if(escena == 3 && escenaUsuario == 1 || escena == 3 && escenaUsuario == 5 || escena == 3 && escenaUsuario == 4)
    {
        valido = 1;
        printf("CAMINANDO\n");
        printf("-------------------------------\n");
        printf("  o \n");
        printf(" /|\\\n");
        printf(" / \\\n");
        printf("-------------------------------\n");
    } 
    else if(escena == 4 && escenaUsuario == 3)
    {
        valido = 1;
        printf("CAMINANDO\n");
        printf("-------------------------------\n");
        printf("  o \n");
        printf(" /|\\\n");
        printf(" / \\\n");
        printf("-------------------------------\n");
    }
    else if(escena == 5 && escenaUsuario == 3)
    {
        valido = 1;
        printf("CAMINANDO\n");
        printf("-------------------------------\n");  
        printf("  o \n");
        printf(" /|\\\n");
        printf(" / \\\n");
        printf("-------------------------------\n");     
    }
    else if(escena == 6 && escenaUsuario == 1)
    {
        valido = 1;
        printf("CAMINANDO\n");
        printf("-------------------------------\n");
        printf("  o \n");
        printf(" /|\\\n");
        printf(" / \\\n");
        printf("-------------------------------\n");
    }
    else
    {
        printf("Debes de dar la vuelta por otro lado...\n");
        printf("-------------------------------\n");
    }

    return valido;
}
void IrA()
{
    int escenaUsuario;
    printf("A que lugar quieres ir\n");
    printf("-------------------------------\n");
    printf("1. IR A DONKEYVILLAGE\n");
    printf("2. IR A CASA FARERO\n");
    printf("3. IR A LAGO\n");
    printf("4. IR A FARO\n");
    printf("5. IR A BOSQUE SUR\n");
    printf("6. IR A BOSQUE NORTE\n");
    printf("-------------------------------\n");    
    scanf("%d", &escenaUsuario);
    printf("-------------------------------\n");
    

    if(puedeIr(escenaUsuario))
    {
        escena = escenaUsuario;
        DescribeEscena();
    }
}
void Recoger()
{
    int COGER;
    if(escena == 5)
    {
        printf("Quieres recoger flor amarilla?\n");
        printf("-------------------------------\n");
        printf("1. SI\n");
        printf("2. NO\n");
        printf("-------------------------------\n");
        scanf("%d", &COGER);
        printf("-------------------------------\n");

        if(COGER == 1)
        {
            tieneFlorAmarilla = 1;
            printf("Tienes la flor amarilla!\n");
            printf("-------------------------------\n");      
            printf("              __/)\n");
            printf("           .-(__(=:\n");
            printf("        |\\ |    \\)\n");        
            printf("        \\ ||\n");
            printf("         \\||\n");
            printf("          \\|\n");
            printf("           |\n");
            printf("-------------------------------\n");
        }

        COGER = 0;
    }
    else if(escena == 6)
    {
        printf("Quieres recoger flor roja?\n");
        printf("-------------------------------\n");
        printf("1. SI\n");
        printf("2. NO\n");
        printf("-------------------------------\n");
        scanf("%d", &COGER);
        printf("-------------------------------\n");

        if(COGER == 1)
        {
            tieneFlorRoja = 1;
            printf("Tienes la flor roja!\n");
            printf("-------------------------------\n");
            printf("      .--.\n");            
            printf("    .'_\\/_'.\n");
            printf("    '. /\\ .'\n");
            printf("       \"||\"\n");        
            printf("        || /\\\n");
            printf("    /\\ ||//\\)\n");
            printf("   (/\\||/\n");
            printf("______\\||/_______\n");
            printf("-------------------------------\n");

        }

        COGER = 0;

        printf("HABLAR MADELEINE %d\n", hablarMadeline);
        if(hablarMadeline == 1)
        {
            printf("Quieres recoger Herradura?\n");
            printf("-------------------------------\n");
            printf("1. SI\n");
            printf("2. NO\n");
            printf("-------------------------------\n");
            scanf("%d", &ponerHerradura);
            printf("-------------------------------\n");
        }

        if(ponerHerradura == 1)
        {
            tieneHerradura = 1;
            printf("Ω\n");
            printf("-------------------------------\n");
        }

        ponerHerradura = 0;
    }
}
void Usar()
{
    int dejarFlores;
    dejarFlores = 0;

    if(escena == 2 && tieneFlorAmarilla == 1 && tieneFlorRoja == 1)
    {
        printf("Quieres dejar las flores para curar al Farero?\n");
        printf("-------------------------------\n");
        printf("1. SI\n");
        printf("2. NO\n");
        printf("-------------------------------\n");
        scanf("%d", &dejarFlores);
        printf("-------------------------------\n");

        if(dejarFlores == 1)
        {
            printf("El farero se ha curado y el faro se ha ENCENDIDO.\n");
            printf("-------------------------------\n");
            encendidoFaro = 1;

            printf("         |\n");            
            printf(" \\     _____     /\n");
            printf("     /       \\\n");            
            printf("    (         )\n");
            printf("-   ( ))))))) )   -\n");
            printf("     \\ \\   / /\n");        
            printf("      \\|___|/\n");
            printf("  /    |___|    \\\n");
            printf("       |___|    \n");
            printf("       |___|\n");
            printf("-------------------------------\n");

        }
    }
    if(escena == 3)
    {
        printf("Quieres ponerle la herradura al BLUEDONKEY?\n");
        printf("-------------------------------\n");
        printf("1. SI\n");
        printf("2. NO\n");
        printf("-------------------------------\n");
        scanf("%d", &ponerHerradura);
        printf("-------------------------------\n");
        if(ponerHerradura == 1 && encendidoFaro == 1)
        {
            printf("Herradura puesta!\n");
            printf("-------------------------------\n");
            printf("EL BLUEDONKEY TE ESTA GUIANDO AL TESORO\n");
            printf("-------------------------------\n");     
            printf("            .''\n");
            printf("  ._.-.___.' \\(`\n");        
            printf(" //(        ( `'\n");
            printf("'/ )\\ ).__. ) \n");
            printf("' <' `\\ ._/'\n");
            printf("   `   \\     \\\n");
            printf("-------------------------------\n");
            Juegofinalizado(ponerHerradura);
        }
    }
}

int Juegofinalizado(int ponerHerradura)
{
    if(ponerHerradura == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{    
    int usar;
    int iniciar;

    escena = 1;
    tieneFlorRoja = 0;
    tieneFlorAmarilla = 0;
    tieneHerradura = 0;
    entregadaFlorRoja = 0;
    entregadaFlorAmarilla = 0;
    encendidoFaro = 0;
    ponerHerradura = 0;
    iniciar = 0;

    while(iniciar == 0)
    {
        printf("-------------------------------\n");
        printf("Estas en DokeyVille\n");
        printf("-------------------------------\n");
        printf("  ____||____\n");
        printf(" ///////////\\\n");
        printf("///////////  \\\n");
        printf("|    _    |  |\n");
        printf("|[] | | []|[]|\n");
        printf("|   | |   |  |\n");
        printf("-------------------------------\n");    
        printf("Te presento a los personajes...\n");
        printf("-------------------------------\n");
        printf("La primera es Madeleine, ella tiene un buen ojo para encontrar pistas ocultas.\n");
        printf("-------------------------------\n");
        printf("El siguiente es Esparrou, siempre sabe donde ir e intuye lo que hay que hacer\n");
        printf("-------------------------------\n");
        printf("Y por ultimo Kaneda, Conoce la historia de la isla.\n");
        printf("-------------------------------\n");
        printf("Quieres hacer una nueva partida?\n");
        printf("1. Si\n");
        printf("2. No\n");
        printf("-------------------------------\n");
        scanf("%d", &iniciar);
        printf("-------------------------------\n");        
        if(iniciar == 2)
        {
            ponerHerradura = 1;
        }
    }

    while(ponerHerradura == 0)
    {

        printf("Que quieres hacer?\n");
        printf("-------------------------------\n");
        printf("1. Hablar con Personaje\n");
        printf("2. Ir a lugar\n");
        printf("3. Recoger objeto\n");
        printf("4. Usar objeto\n");
        printf("5. Salir\n");
        printf("-------------------------------\n");
        scanf("%d", &usar);
        printf("-------------------------------\n");
        if(usar == 1)
        {
            int HablarCon;
            HablarCon = 0; 
            printf("Con quien quieres hablar?\n");
            printf("-------------------------------\n");
            printf("1. Kaneda\n");
            printf("2. Esparrou\n");
            printf("3. Madeleine\n");
            printf("-------------------------------\n");
            scanf("%d", &HablarCon);
            printf("-------------------------------\n");
            if(HablarCon == 1)
            {
                HablarKaneda();  
            }
            else if(HablarCon == 2)
            {
                HablaEsparrou();
            }
            else if(HablarCon == 3)
            {
                HablaMadeleine();
            }
        }
        else if(usar == 2)
        {
            IrA();
        }
        else if(usar == 3)
        {
            Recoger();
        }
        else if(usar == 4)
        {
            Usar();
        }
        else if(usar == 5)
        {
            printf("DALE A LA X :)\n"); 
            printf("-------------------------------\n");           
        }
    }
}

