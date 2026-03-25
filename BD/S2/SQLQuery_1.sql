create schema prueba
GO

CREATE TABLE prueba.usuario (
    id int not null PRIMARY KEY,
    nombre VARCHAR(255) not null,
    edad TINYINT not NULL
)
GO

CREATE table prueba.ordenes (
    id int not null PRIMARY KEY,
    idusuario int FOREIGN KEY REFERENCES prueba.usuario(id),
    fecha DATE
)
GO

CREATE TABLE prueba.prueba(
    id int IDENTITY(1,1) PRIMARY KEY,
    numero int not null
)


ALTER TABLE prueba.usuario
ADD CHECK (edad>=18 and edad<=99);

ALTER TABLE prueba.ordenes
ADD CONSTRAINT fecha_default
DEFAULT CURRENT_TIMESTAMP FOR fecha;

select * from prueba.ordenes