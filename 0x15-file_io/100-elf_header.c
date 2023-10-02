#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcnt1.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - check if a file is an ELF file.
 * @e_ident: apointer to an array containing the ELF magic numbers.
 * Descriptio: if the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Erro: not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - print the magic numbers of an ELF header.
 * @e_ident: a pointer to an array containing the ELF magic numbers.
 * Description: magic numbers ara separated by spaces.
 */
void print_magic(unsigned char *e_ident)
{
	int idex;

	printf(" Magic:   ");
	for (idex = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - prints the class of an ELF header.
 * @e_ident: apointer to an array containing the ELF class.
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class:   ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
		defualt:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - prints the data of an ELF header.
 * @e_ident: a pointer to an array containing the ELF class.
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data:  ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATAONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * print_version - prints the version of an ELF header.
 *  @e_ident: apointer to an array containing the ELF version.
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version:      %d",
			e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (curent)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * close_elf - closes an ELF file.
 * @elf: the file descriptor of the ELF file.
 * Description: if the file can not be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: can not close fd %d\n", elf);
		exit(98);
	}
}
