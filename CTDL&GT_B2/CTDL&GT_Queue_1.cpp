// cai dat queue
// nguon topdev
struct Node
{
    int data;
    Node *next;
};

struct Queue
{
    Node *head;
    Node *tail;
};

void CreateQueue(Queue &q)
{
    q.head = NULL;
    q.tail = NULL;
}

Node* CreateNode(int init)
{
    Node *node = new Node;
    node->data = init;
    node->next = NULL;
    return node;
}

void DestroyQueue(Queue &q) //xoa phan tu da lay
{
    Node *node = q.head;
    while (q.head != NULL)
    {
        q.head = node->next;
        delete node;
        node = q.head;
    }
    q.tail = NULL;
}

int IsEmpty(Queue q)//kt hang doi co rong hay ko
{
    if (q.head == NULL)
        return 1;
    return 0;
}

void EnQueue(Queue &q, Node *node)//them phan tu vao cuoi hang doi
{
    if (IsEmpty(q))
    {
        q.head = node;
        q.tail = node;
    }
    else
    {
        q.tail->next = node;
        q.tail = node;
    }
}

int DeQueue(Queue &q)//lay phan tu dau cua hang doi  va xoa no di 
{
    if (IsEmpty(q))
        return 0;
    Node *node = q.head;
    int data = node->data;
    q.head = node->next;
    delete node;
    if (q.head == NULL)
        q.tail = NULL;
    return data;
}

int Front(Queue q)// tra ve gia tri dau cua hang doi 
{
    if (IsEmpty(q))
        return 0;
    return q.head->data;
}

void PrintQueue(Queue q)//in ra cac phan tu trong hang doi 
{
    Node *node = q.head;
    while (node != NULL)
    {
        cout << node->data << ' ';
        node = node->next;
    }
}

