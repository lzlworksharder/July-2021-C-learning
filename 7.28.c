#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
// review

// typedef struct S
// {
//     int n;
//     // char c;
//     int arr[0]; //���������Ա
// }S;
// int main()
// {
//     printf("%d\n",sizeof(S));
//     S* ps = (S*) malloc(sizeof(S) + 10*sizeof(int));
//     ps->arr[3] = 5;
//     return 0;
// }

// *** 
    // �ļ�����:
    // �����ļ�,�����ļ�
    // �����ļ�:(��׺Ϊ.c��),Ŀ���ļ�(.obj),��ִ�г���(.exe)
    // �����ļ�:��������ʱ��д���ļ�,����������ݵ��ļ�
    // �ļ���:�ļ�·��+�ļ�������+�ļ���׺
    // ��: c:\code\test.txt
    // �����ļ�:�ı��ļ�/�������ļ�
    // �������ڴ����Զ�������ʽ�洢,����ת��ֱ����������,���Ƕ������ļ�
    // ���Ҫ���������ascii���ַ���ʽ�洢,����ļ�Ϊ�ı��ļ�
    // ���ݵ��ڴ�洢��ʽ:�ַ�--ASCII�� ; ��ֵ��--ASCII��������(ʡ�ֽ�)
    // �ļ�������:����������--���(����)������--����/��Ļ
    // ���(����)����������֮��Ż�һ���Է������/��Ļ
    // �ļ�ָ��:ÿ���ļ��������Ϣ�Խṹ��FILE���ͷ����ڴ���ļ���Ϣ��
    // ���ļ�ʱϵͳ�Զ�����һ��FILE���ͱ���,fopen������ļ���Ϣ���ṹ�����
    // һ��ͨ��һ��FILEָ��ά���˽ṹ����

// ***
    // �ļ��Ĵ򿪺͹ر�:
    // FILE* fopen(const char* filename,const char* mode);
    // int fclose(FILE* stream);
    // int main()
    // {
    //     // ���·��:
    //     // ../��ʾ��һ��·��, ./��ʾ��ǰ·��
    //     // fopen("../../test.txt","r");
    //     FILE* pf = fopen("test.txt","a");
    //     // pfָ���ļ���Ϣ���д�����һ�������ļ���Ϣ�Ľṹ�����,����ά��
    //     // fopenʧ��,pf=NULL
    //     if (!pf)
    //     {
    //         printf("%s\n",strerror(errno));
    //     }
    //     fclose(pf);
    //     // �ر��ļ�:���ļ���Ϣ���Ŀռ��ͷŵ�
    //     // ����Ҫ��pf�ó�NULL
    //     pf = NULL;
    //     return 0;
    // }
    // �ļ���˳���д:
    // int fputc(int c, FILE* stream); ��cд���ļ�����
    // int main()
    // {
    //     FILE* pf = fopen("test.txt","w");
    //     if (!pf)
    //     {
    //         printf("%s\n",strerror(errno));
    //     }
    //     else
    //     {
    //         //write
    //         fputc('b',pf);
    //         fputc('i',pf);
    //         fputc('t',pf);
    //         fclose(pf);
    //         pf = NULL;
    //     }
    //     // read
    //     pf = fopen("test.txt","r");
    //     printf("%c",fgetc(pf));
    //     printf("%c",fgetc(pf));
    //     printf("%c",fgetc(pf));
    //     fclose(pf);
    //     pf = NULL;
    //     return 0;
    // }
// ����-��׼�����豸 stdin
// ��Ļ-��׼����豸 stdout
// ��һ������Ĭ�ϴ򿪵��������豸
// Ĭ�ϴ�������: stdin stdout stderr ����FILE*����

// fgetc/fputc ��������������/�����
    // int main()
    // {
    //     char ch[10] = {0};
    //     fgets(ch,10,stdin); // fgets(char* buffer, int MAX_COUNT, FILE* stream)
    //     fputs(ch,stdout);
    //     return 0;
    // } // �Ӽ���������,����Ļ�����

    // �ı�������:fgets  gets(buf):�Ӽ���������һ��
    // �ı������:fputs  puts(buf):ֱ�Ӵ�ӡ����Ļ��,һ��
    // ��ʽ������(��):fscanf
    // ��ʽ�����(д):fprintf
    // ����������:fread // ֻ�������ļ�
    // ���������:fwrite // ֻ�������ļ�

    struct S
    {
        int n;
        float f;
        char arr[1024];
    };
    // int main()
    // {
    //     // д��Ϣ
    //     struct S s = {0};
    //     FILE *pf = fopen("test.txt","r");
    //     // fprintf(pf,"%d %f %s",s.n,s.f,s.arr);
    //     // fclose(pf);
    //     // pf = NULL;

    //     // ����Ϣ
    //     fscanf(pf,"%d %f %s",&(s.n),&(s.f),&(s.arr));
    //     fprintf(stdout,"%d %f %s",s.n,s.f,s.arr);
    //     return 0;
    // }

    // �Ա�: scanf/fscanf/sscanf
    // printf/fprintf/sprintf
    // scanf/printf ��Ա�׼����/�����
    // fscanf/fprintf �����������/�����
    // sscanf/sprintf ����ַ��� 

    
    // int main()
    // {
    //     // �����ݸ�ʽ���Ž��ַ���
    //     struct S s = {1,5.66f,"i like sleeping"};
    //     char buf[1024] = {0};
    //     struct S tmp = {0};
    //     sprintf(buf,"%d %f %s",s.n,s.f,s.arr);
    //     printf("%s\n",buf);

    //     // ���ַ������ַ����ݸ�ʽ������
    //     sscanf(buf, "%d %f %s",&(tmp.n),&(tmp.f),tmp.arr); // arr��ֻ��һ���ַ�????
    //     printf("%d %f %s\n",tmp.n,tmp.f,tmp.arr); 
    //     return 0;
    // }

    // �����ƶ�д
    // fwrite(buf,size,count,stream); // buf:��д�����ݵ�ָ��,size��һ��Ԫ���ֽ���,count��д��Ԫ�ظ���,streamΪ�ļ�ָ��
    // fread(buf,size,count,stream); // ��fwrite����,ע��buf��������������,�����ǽṹ��,������ʵ�����ĸ���

    // �ļ��������д:
    int main()
    {
        FILE *pf = fopen("test.txt","w+");
        char* buf = "abcdef";
        fputs(buf,pf);// д��֮��,ָ����ĩβ
        rewind(pf);
        // rewind()���ļ�ָ��ص���ʼλ��
        printf("start = %c\n",getc(pf));
        // 1.��λ�ļ�ָ��
        fseek(pf,-2,SEEK_END); 
        // fseek(stream,offset,origin)
        // fseek():����ƫ�����ƶ�ָ�� offsetƫ����,��λ�ֽ� origin��ǰλ��
        // ��ʼλ��:��ǰλ��SEEK_CUR �ļ�ĩβSEEK_END �ļ���ʼλ��SEEK_SET
        printf("offset = %d\n",ftell(pf));
        // ftell(pf) �����������ʼλ�õ�ƫ����
        // 2.��ȡ�ļ�
        int ch = 0;
        ch = getc(pf);
        printf("current char = %c\n",ch); // e
        
        fclose(pf);
        pf = NULL;
        return 0;
    }

// �ļ���������һ��eof
// feof�����ж��ļ�������ʽ,�ж�����Ϊ��ȡʧ�ܽ���������Ϊ�����ļ�β����
// �ж϶�ȡ����:fgets()����NULL  fgetc()����-1
// �������ļ��ж�:fread�жϷ���ֵ�Ƿ�С�ڶ�ȡ�����ֵ

// perror("hehe") ���м���ʾ��,��ʾ��ӡ��ʾ��+����ԭ�� ��: hehe:NO SUCH FILE OR DIRECTORY

// while ((c = fgetc(fp)) != EOF)
// {
//     putchar(c);
// }
// // �ж���ʲôԭ�������,������error����eof
// if (ferror(fp)) puts("error when reading");
// else if (feof(fp)) puts("end of file reached successfully");
// ferror(fp) ��;��������-����1  
// feof(fp) ������eof-���ط�0 ������;����-����0
