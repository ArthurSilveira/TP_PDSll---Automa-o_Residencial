#ifndef AUTOMACAO_SALA_HPP
#define AUTOMACAO_SALA_HPP

#include <iostream>
#include <string>

// Classe base para dispositivos
class Dispositivo {
protected:
    bool estado = false;
public:
    virtual void definirLigado(bool estado);
    virtual void controlar(float nivel) = 0; // Método puramente virtual
};

// Classe para controlar a iluminação
class Iluminacao : public Dispositivo {
private:
    float nivel;
public:
    void controlar(float nivel) override;
};

// Classe para controlar o ar condicionado
class ArCondicionado : public Dispositivo {
private:
    double temperatura;
public:
    void controlar(float temp) override;
};

// Classe para controlar a televisão
class Televisao : public Dispositivo {
private:
    float volume;
    int canal;
public:
    void controlar(float nivel) override;
    void controlarCanal(int canal);
};

// Classe principal para gerenciar a automatização da sala de estar
class AutomacaoSala {
private:
    Iluminacao iluminacao;
    ArCondicionado arCondicionado;
    Televisao televisao;

public:
    void controlarIluminacao(bool estado, float brilho);
    void controlarArCondicionado(bool estado, float temperatura);
    void controlarTelevisao(bool estado, float volume = 1.0f, int canal = 1);
};

#endif // AUTOMACAO_SALA_HPP