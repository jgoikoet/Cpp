/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:27:51 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/11 10:36:18 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
Las coordenadas baricéntricas se calculan mediante determinantes.
Si tienes los vértices del triángulo A(x1, y1), B(x2, y2), y C(x3, y3),
y el punto que quieres verificar está en P(x, y),
las coordenadas baricéntricas λ1, λ2 y λ3 para el punto P son:

λ1 = ((y2 - y3)(x - x3) + (x3 - x2)(y - y3)) / ((y2 - y3)(x1 - x3) + (x3 - x2)(y1 - y3))
λ2 = ((y3 - y1)(x - x3) + (x1 - x3)(y - y3)) / ((y2 - y3)(x1 - x3) + (x3 - x2)(y1 - y3))
λ3 = 1 - λ1 - λ2

Si todas las coordenadas baricéntricas λ1, λ2 y λ3 son mayores o iguales a 0,
y su suma es menor o igual a 1, entonces el punto P(x, y) está dentro del triángulo ABC.
Pero este sistema hace que si el punto esta justo en el borde, lo considere como que esta dentro,
y el enunciado dice que en este caso se debe considerar que esta fuera. Asi que para
arreglar esto:

// Supongamos que ya se han calculado λ1, λ2 y λ3 para el punto P

const float epsilon = 0.0001f; // Pequeño margen de error/tolerancia

bool dentroDelTriangulo = (λ1 > epsilon) && (λ2 > epsilon) && (λ3 > epsilon) &&
                          ((λ1 + λ2 + λ3) > (1.0f + epsilon)); ERROR!!!!!!!!!!!

(lambda1 > epsilon) && (lambda2 > epsilon) && (lambda3 > epsilon) &&
           ((lambda1 + lambda2 + lambda3) < (1.0f - epsilon)); ERROR!!!!!!!!!!
		   
Este razonamiento no es del todo exacto, si ke λ1, λ2 y λ3 deben estar por encima de epsilon,
pero la suma de los 3 sigue teniendo que ser menor o igual que 1.
*/

bool bsp( Point const  a, Point const   b, Point const  c, Point const  point)
{

	float	B1;
	float	B2;
	float	B3;
	float	e = 0.0001f;
	
	float	x1 = (a.getCorX()).toFloat();
	float	x2 = (b.getCorX()).toFloat();
	float	x3 = (c.getCorX()).toFloat();
	float	xp = (point.getCorX()).toFloat();
	float	y1 = (a.getCorY()).toFloat();
	float	y2 = (b.getCorY()).toFloat();
	float	y3 = (c.getCorY()).toFloat();
	float	yp = (point.getCorY()).toFloat();
	
	B1 = (((y2 - y3) * (xp - x3)) + ((x3 - x2) * (yp - y3))) / (((y2 - y3) * (x1 - x3)) + ((x3 - x2) * (y1 - y3)));
	B2 = (((y3 - y1) * (xp - x3)) + ((x1 - x3) * (yp - y3))) / (((y2 - y3) * (x1 - x3)) + ((x3 - x2) * (y1 - y3)));
	B3 = 1 - B1 - B2;

	if (B1 >= e && B2 >= e && B3 >= e && ((B1 + B2 + B3) <= (1.0f)))
		return (1);
	
	return (0);
}
