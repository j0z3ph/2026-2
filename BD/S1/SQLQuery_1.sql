use gusdb

CREATE TABLE dbo.persona (
    id bigint not null PRIMARY KEY,
    nombre VARCHAR(255),
    direccion VARCHAR(255),
    nacimiento DATE,
    genero char(1)
);

alter TABLE persona
drop CONSTRAINT UQ__persona__3213E83ECAFA5002

ALTER TABLE oficina.PERSONA 
ADD telefono char(10)

ALTER TABLE oficina.Persona
ALTER COLUMN genero char(2)

ALTER TABLE oficina.Persona
DROP COLUMN genero

EXEC sp_rename 'oficina.persona.nombre', 'nombre_completo', 'COLUMN'

select * from sys.schemas


drop table dbo.persona
drop schema oficina